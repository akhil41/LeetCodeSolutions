# Language: Python
# Commit Timestamp: 2032-01-07T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2032-01-07T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int maxProfit(int[] prices) {
    int sellOne = 0;
    int holdOne = Integer.MIN_VALUE;

    for (final int price : prices) {
      sellOne = Math.max(sellOne, holdOne + price);
      holdOne = Math.max(holdOne, -price);
    }

    return sellOne;
  }
}
