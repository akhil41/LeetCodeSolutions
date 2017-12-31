# Language: Python
# Commit Timestamp: 2024-03-19T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-03-19T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-03-19T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def maxDepth(self, root: TreeNode | None) -> int:
    if not root:
      return 0
    return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
