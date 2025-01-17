# Language: Python
# Commit Timestamp: 2036-11-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2036-11-11T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def grayCode(self, n: int) -> list[int]:
    ans = [0]

    for i in range(n):
      for j in reversed(range(len(ans))):
        ans.append(ans[j] | 1 << i)

    return ans
