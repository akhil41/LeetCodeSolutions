# Language: Python
# Commit Timestamp: 2027-09-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2027-09-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  @functools.lru_cache(None)
  def isScramble(self, s1: str, s2: str) -> bool:
    if s1 == s2:
      return True
    if collections.Counter(s1) != collections.Counter(s2):
      return False

    for i in range(1, len(s1)):
      if self.isScramble(s1[:i], s2[:i]) and self.isScramble(s1[i:], s2[i:]):
        return True
      if (self.isScramble(s1[:i], s2[len(s2) - i:]) and
              self.isScramble(s1[i:], s2[: len(s2) - i])):
        return True

    return False
