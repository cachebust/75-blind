#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce
        /* for (int i=0; i<nums.size()-1; i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {-1, -1}; */

        // two pass hash table
        /* unordered_map<int, int> us;
        for (int i=0; i<nums.size(); i++) {
            us[nums[i]] = i;
        }

        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if (us.count(complement) && us[complement] != i) {
                return {i, us[complement]};
            }
        }*/

        // one pass hash table
        unordered_map<int, int> us;
        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if (us.count(complement) && us[complement] != i) {
                return {i, us[complement]};
            }
            us[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution s1;
    vector<int> nums = {2, 5, 5, 11};
    vector<int> ans = s1.twoSum(nums, 10);
    for (int x: ans) {
        cout << x << ", ";
    }
}