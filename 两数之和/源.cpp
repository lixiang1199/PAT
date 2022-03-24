#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int sum = 0;
        int i, j;
        for (i = 0; i < nums.size(); i++)
        {
            for (j = i + 1; j < nums.size(); j++)
                if (nums[i] + nums[j] == target)
                    break;

        }
        return{ i,j };
    }
};

int main()
{
    vector<int> b;
    Solution a;
    a.twoSum(b, 9);
}