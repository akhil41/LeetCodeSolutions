# Language: Python
# Commit Timestamp: 2024-01-19T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-01-19T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-01-19T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int maxDepth(TreeNode root) {
    if (root == null)
      return 0;
    return 1 + Math.max(maxDepth(root.left), maxDepth(root.right));
  }
}
