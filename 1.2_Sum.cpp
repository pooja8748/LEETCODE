#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int x, y;
        for(i=0; i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        return {x, y};
    }
};
