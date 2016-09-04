// Language: Java
// Commit Timestamp: 2018-12-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-12-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-12-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def maxSubArray(self, nums: list[int]) -> int:
    ans = -math.inf
    summ = 0

    for num in nums:
      summ = max(num, summ + num)
      ans = max(ans, summ)

    return ans
