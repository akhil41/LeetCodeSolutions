# Language: Python
# Commit Timestamp: 2031-07-11T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2031-07-11T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int search(int[] nums, int target) {
    int l = 0;
    int r = nums.length - 1;

    while (l <= r) {
      final int m = (l + r) / 2;
      if (nums[m] == target)
        return m;
      if (nums[l] <= nums[m]) { // nums[l..m] are sorted.
        if (nums[l] <= target && target < nums[m])
          r = m - 1;
        else
          l = m + 1;
      } else { // nums[m..n - 1] are sorted.
        if (nums[m] < target && target <= nums[r])
          l = m + 1;
        else
          r = m - 1;
      }
    }

    return -1;
  }
}
