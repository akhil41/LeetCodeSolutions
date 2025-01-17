# Language: Python
# Commit Timestamp: 2032-09-03T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2032-09-03T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def uniquePathsWithObstacles(self, obstacleGrid: list[list[int]]) -> int:
    m = len(obstacleGrid)
    n = len(obstacleGrid[0])
    dp = [0] * n
    dp[0] = 1

    for i in range(m):
      for j in range(n):
        if obstacleGrid[i][j]:
          dp[j] = 0
        elif j > 0:
          dp[j] += dp[j - 1]

    return dp[n - 1]
