#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // bruteforce
        /* for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false; */

        // hash set
        /* unordered_set<int> set;
        for (int i=0; i<nums.size(); i++) {
            auto it = set.find(nums[i]);
            if (it != set.end()) {
                return true;
            }
            set.insert(nums[i]);
        }
        return false; */

        // hash map
        unordered_map<int, int> map; // map takes {key, value} pair
        for (int x: nums) { 
            if (map[x] >= 1) {
                return true;
            }
            map[x]++; // track number of time(s) key is present as value
        }
        return false;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 2, 3, 0};
    cout << s1.containsDuplicate(nums);
}