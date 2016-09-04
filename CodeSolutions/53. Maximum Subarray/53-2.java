// Language: Java
// Commit Timestamp: 2019-06-14T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-06-14T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-06-14T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public int maxSubArray(int[] nums) {
    int ans = Integer.MIN_VALUE;
    int sum = 0;

    for (final int num : nums) {
      sum = Math.max(num, sum + num);
      ans = Math.max(ans, sum);
    }

    return ans;
  }
}
