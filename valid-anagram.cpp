#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int arr[26] = {0};

        for (int i=0; i<s.length(); i++) {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for (int check: arr) {
            if (check != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s1 = "cat";
    string s2 = "tac";
    cout << sol.isAnagram(s1, s2);
}