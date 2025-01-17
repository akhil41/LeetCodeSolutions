# Language: Python
# Commit Timestamp: 2035-01-21T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2035-01-21T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def longestConsecutive(self, nums: list[int]) -> int:
    ans = 0
    seen = set(nums)

    for num in nums:
      # `num` is the start of a sequence.
      if num - 1 in seen:
        continue
      length = 0
      while num in seen:
        num += 1
        length += 1
      ans = max(ans, length)

    return ans
