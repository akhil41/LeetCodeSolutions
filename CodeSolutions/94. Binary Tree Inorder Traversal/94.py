# Language: Python
# Commit Timestamp: 2024-09-15T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-09-15T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-09-15T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def inorderTraversal(self, root: TreeNode | None) -> list[int]:
    ans = []
    stack = []

    while root or stack:
      while root:
        stack.append(root)
        root = root.left
      root = stack.pop()
      ans.append(root.val)
      root = root.right

    return ans
