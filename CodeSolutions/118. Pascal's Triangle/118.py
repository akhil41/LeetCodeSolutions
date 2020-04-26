# Language: Python
# Commit Timestamp: 2027-01-03T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2027-01-03T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def generate(self, numRows: int) -> list[list[int]]:
    ans = []

    for i in range(numRows):
      ans.append([1] * (i + 1))

    for i in range(2, numRows):
      for j in range(1, len(ans[i]) - 1):
        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j]

    return ans
