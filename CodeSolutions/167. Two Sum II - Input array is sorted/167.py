# Language: Python
# Commit Timestamp: 2022-08-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-08-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-08-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def twoSum(self, numbers: list[int], target: int) -> list[int]:
    l = 0
    r = len(numbers) - 1

    while l < r:
      summ = numbers[l] + numbers[r]
      if summ == target:
        return [l + 1, r + 1]
      if summ < target:
        l += 1
      else:
        r -= 1
