# Language: Python
# Commit Timestamp: 2025-07-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-07-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public boolean isSymmetric(TreeNode root) {
    return isSymmetric(root, root);
  }

  private boolean isSymmetric(TreeNode p, TreeNode q) {
    if (p == null || q == null)
      return p == q;

    return p.val == q.val && isSymmetric(p.left, q.right) && isSymmetric(p.right, q.left);
  }
}
