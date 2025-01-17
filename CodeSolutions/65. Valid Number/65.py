# Language: Python
# Commit Timestamp: 2034-10-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-10-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def isNumber(self, s: str) -> bool:
    s = s.strip()
    if not s:
      return False

    seenNum = False
    seenDot = False
    seenE = False

    for i, c in enumerate(s):
      if c == '.':
        if seenDot or seenE:
          return False
        seenDot = True
      elif c == 'e' or c == 'E':
        if seenE or not seenNum:
          return False
        seenE = True
        seenNum = False
      elif c in '+-':
        if i > 0 and s[i - 1] not in 'eE':
          return False
        seenNum = False
      else:
        if not c.isdigit():
          return False
        seenNum = True

    return seenNum
