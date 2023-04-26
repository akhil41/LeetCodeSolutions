# Language: Python
# Commit Timestamp: 2029-12-18T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2029-12-18T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public boolean isSameTree(TreeNode p, TreeNode q) {
    if (p == null || q == null)
      return p == q;
    return p.val == q.val &&          //
        isSameTree(p.left, q.left) && //
        isSameTree(p.right, q.right);
  }
}
