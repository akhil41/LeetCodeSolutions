# Language: Python
# Commit Timestamp: 2026-06-07T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2026-06-07T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public void rotate(int[] nums, int k) {
    k %= nums.length;
    reverse(nums, 0, nums.length - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.length - 1);
  }

  private void reverse(int[] nums, int l, int r) {
    while (l < r)
      swap(nums, l++, r--);
  }

  private void swap(int[] nums, int l, int r) {
    final int temp = nums[l];
    nums[l] = nums[r];
    nums[r] = temp;
  }
}
