# Language: Python
# Commit Timestamp: 2025-03-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-03-14T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def findPeakElement(self, nums: list[int]) -> int:
    l = 0
    r = len(nums) - 1

    while l < r:
      m = (l + r) // 2
      if nums[m] >= nums[m + 1]:
        r = m
      else:
        l = m + 1

    return l
