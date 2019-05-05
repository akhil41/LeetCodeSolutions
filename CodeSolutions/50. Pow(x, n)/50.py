# Language: Python
# Commit Timestamp: 2026-02-07T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2026-02-07T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def myPow(self, x: float, n: int) -> float:
    if n == 0:
      return 1
    if n < 0:
      return 1 / self.myPow(x, -n)
    if n % 2 == 1:
      return x * self.myPow(x, n - 1)
    return self.myPow(x * x, n // 2)
