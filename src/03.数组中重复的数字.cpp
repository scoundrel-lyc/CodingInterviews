/*
    剑指 Offer 03. 数组中重复的数字
    找出数组中重复的数字。
    在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
    数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
    请找出数组中任意一个重复的数字。

    输入：
    [2, 3, 1, 0, 2, 5, 3]
    输出：2 或 3
*/

#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution
{
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int>hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.count(nums[i]) != 0) {
                return nums[i];
            }
            hash[nums[i]]++;
        }
        return 0;
    }
};

// ACM 模式 输入一个一维vector
template<typename T>
void fcin(vector<T>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
}


int main()
{
    cout << "***********************************************" << endl;
    cout << "剑指 Offer 03. 数组中重复的数字" << endl;
    cout << "***********************************************" << endl;


    //输入
    //m为输入测试矩阵的个数
    int m;
    cout << "输入测试矩阵的个数:";
    cin >> m;cout << endl;
    cout << "输入测试数据:";
    vector<int>T(m,0);
    fcin(T);
    Solution a;
    int res = a.findRepeatNumber(T);
    cout << "答案为：" << res << endl;
    return 0;

}

