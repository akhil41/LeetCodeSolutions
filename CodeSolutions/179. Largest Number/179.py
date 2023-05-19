# Language: Python
# Commit Timestamp: 2030-01-17T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-01-17T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class LargerStrKey(str):
  def __lt__(x: str, y: str) -> bool:
    return x + y > y + x


class Solution:
  def largestNumber(self, nums: list[int]) -> str:
    return ''.join(sorted(map(str, nums), key=LargerStrKey)).lstrip('0') or '0'
