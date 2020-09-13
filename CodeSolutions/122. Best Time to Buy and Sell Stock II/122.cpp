# Language: Python
# Commit Timestamp: 2027-06-02T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2027-06-02T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int sell = 0;
    int hold = INT_MIN;

    for (const int price : prices) {
      sell = max(sell, hold + price);
      hold = max(hold, sell - price);
    }

    return sell;
  }
};
