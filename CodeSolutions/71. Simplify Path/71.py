# Language: Python
# Commit Timestamp: 2035-02-20T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2035-02-20T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def simplifyPath(self, path: str) -> str:
    stack = []

    for str in path.split('/'):
      if str in ('', '.'):
        continue
      if str == '..':
        if stack:
          stack.pop()
      else:
        stack.append(str)

    return '/' + '/'.join(stack)
