# Language: Python
# Commit Timestamp: 2023-03-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-03-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-03-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public void recoverTree(TreeNode root) {
    inorder(root);
    swap(x, y);
  }

  private TreeNode pred = null;
  private TreeNode x = null; // the first wrong node
  private TreeNode y = null; // the second wrong node

  private void inorder(TreeNode root) {
    if (root == null)
      return;

    inorder(root.left);

    if (pred != null && root.val < pred.val) {
      y = root;
      if (x == null)
        x = pred;
      else
        return;
    }
    pred = root;

    inorder(root.right);
  }

  private void swap(TreeNode x, TreeNode y) {
    final int temp = x.val;
    x.val = y.val;
    y.val = temp;
  }
}
