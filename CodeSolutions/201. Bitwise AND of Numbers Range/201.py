# Language: Python
# Commit Timestamp: 2029-05-22T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2029-05-22T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def rangeBitwiseAnd(self, m: int, n: int) -> int:
    return self.rangeBitwiseAnd(m >> 1, n >> 1) << 1 if m < n else m
