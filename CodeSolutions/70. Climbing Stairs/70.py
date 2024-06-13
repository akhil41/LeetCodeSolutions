# Language: Python
# Commit Timestamp: 2031-02-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2031-02-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def climbStairs(self, n: int) -> int:
    # dp[i] := the number of ways to climb to the i-th stair
    dp = [1, 1] + [0] * (n - 1)

    for i in range(2, n + 1):
      dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]
