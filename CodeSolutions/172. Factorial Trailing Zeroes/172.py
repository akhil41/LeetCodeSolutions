# Language: Python
# Commit Timestamp: 2035-04-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2035-04-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def trailingZeroes(self, n: int) -> int:
    return 0 if n == 0 else n // 5 + self.trailingZeroes(n // 5)
