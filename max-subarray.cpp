#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i=1; i<nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {5,4,-1,7,8};
    cout << s1.maxSubArray(nums);
}