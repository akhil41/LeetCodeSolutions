# Language: Python
# Commit Timestamp: 2036-12-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2036-12-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int searchInsert(int[] nums, int target) {
    int l = 0;
    int r = nums.length;

    while (l < r) {
      final int m = (l + r) / 2;
      if (nums[m] == target)
        return m;
      if (nums[m] < target)
        l = m + 1;
      else
        r = m;
    }

    return l;
  }
}
