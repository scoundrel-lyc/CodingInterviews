/*
    剑指 Offer 24. 反转链表
    定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
    
    输入: 1->2->3->4->5->NULL
    输出: 5->4->3->2->1->NULL
*/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {};
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while (cur) {
            ListNode* fod = cur->next;
            cur->next = pre;
            pre = cur;
            cur = fod;
        }
        return pre;
    }
};

void fcin(vector<int>& v, int m) {
    while (m) {
        int n;
        cin >> n;
        v.push_back(n);
        m--;
    }
}

//建立链表，返回头结点
ListNode* creatList(vector<int>& v) {
    ListNode* SB = new ListNode(0);
    ListNode* pre = SB;
    int i = 0;
    while (i < v.size()) {
        ListNode* cur = new ListNode(v[i]);
        pre->next = cur;
        pre = cur;
        i++;
    }
    return SB->next;
}

int main()
{
    cout << "***********************************************" << endl;
    cout << "剑指 Offer 24. 反转链表" << endl;
    cout << "***********************************************" << endl;

    int m;
    cout << "输入链表元素个数:" ;
    cin >> m;
    cout << endl;

    vector<int>T;

    cout << "输入链表元素：";
    fcin(T, m);
    cout << endl;

    //建立链表
    ListNode* head = creatList(T);
    Solution a;
    ListNode* res = a.reverseList(head);
    cout << "反转后的链表：";
    while (res) {
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;

    return 0;
}

