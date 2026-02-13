#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // bruteforce
        /* 
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            int value = 1;
            for (int j=0; j<nums.size(); j++) {
                if (i != j) {
                    value *= nums[j];
                }
            }
            ans.push_back(value);
        }
        return ans;
        */

        // use prefix and suffix
        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;
        for (int i=0; i<n; i++) { // multiply the values from left to right 
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i=n-1; i>=0; i--) { // multiply the values form right to left
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        return ans;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = s1.productExceptSelf(nums);
    for (int x: ans) {
        cout << x << ", ";
    }
}