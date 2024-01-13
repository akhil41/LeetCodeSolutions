# Language: Python
# Commit Timestamp: 2030-09-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-09-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int sellTwo = 0;
    int holdTwo = INT_MIN;
    int sellOne = 0;
    int holdOne = INT_MIN;

    for (const int price : prices) {
      sellTwo = max(sellTwo, holdTwo + price);
      holdTwo = max(holdTwo, sellOne - price);
      sellOne = max(sellOne, holdOne + price);
      holdOne = max(holdOne, -price);
    }

    return sellTwo;
  }
};
