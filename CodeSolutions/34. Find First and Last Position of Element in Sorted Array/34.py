# Language: Python
# Commit Timestamp: 2028-06-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-06-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def searchRange(self, nums: list[int], target: int) -> list[int]:
    l = bisect_left(nums, target)
    if l == len(nums) or nums[l] != target:
      return -1, -1
    r = bisect_right(nums, target) - 1
    return l, r
