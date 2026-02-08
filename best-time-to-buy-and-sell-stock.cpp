#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0]; // the first price at which the stock was purchased
        int profit = 0; 

        // loop through the future prices and compare
        for (int i=0; i<prices.size(); i++) {
            if (prices[i] < buy) { // if price of stock was lesser the next day, ignore the previous price altogether
                buy = prices[i];
            } else if (prices[i] - buy > profit) { // keep a track of the profit
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

int main() {
    Solution s1;
    vector<int> prices = {5, 6, 8, 1, 2, 3};
    cout << s1.maxProfit(prices);
}