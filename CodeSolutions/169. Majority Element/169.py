// Language: Java
// Commit Timestamp: 2018-01-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-01-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-01-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def majorityElement(self, nums: list[int]) -> int:
    ans = None
    count = 0

    for num in nums:
      if count == 0:
        ans = num
      count += (1 if num == ans else -1)

    return ans
