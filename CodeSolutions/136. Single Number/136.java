# Language: Python
# Commit Timestamp: 2030-10-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-10-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int singleNumber(int[] nums) {
    int ans = 0;

    for (final int num : nums)
      ans ^= num;

    return ans;
  }
}
