# Language: Python
# Commit Timestamp: 2031-04-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2031-04-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def singleNumber(self, nums: list[int]) -> int:
    ones = 0
    twos = 0

    for num in nums:
      ones ^= (num & ~twos)
      twos ^= (num & ~ones)

    return ones
