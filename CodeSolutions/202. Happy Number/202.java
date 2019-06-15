# Language: Python
# Commit Timestamp: 2026-03-09T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2026-03-09T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public boolean isHappy(int n) {
    int slow = squaredSum(n);
    int fast = squaredSum(squaredSum(n));

    while (slow != fast) {
      slow = squaredSum(slow);
      fast = squaredSum(squaredSum(fast));
    }

    return slow == 1;
  }

  private int squaredSum(int n) {
    int sum = 0;
    while (n > 0) {
      sum += Math.pow(n % 10, 2);
      n /= 10;
    }
    return sum;
  }
}
