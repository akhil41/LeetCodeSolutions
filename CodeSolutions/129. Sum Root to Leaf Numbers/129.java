// Language: C++
// Commit Timestamp: 2017-02-24T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-02-24T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-02-24T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public int sumNumbers(TreeNode root) {
    dfs(root, 0);
    return ans;
  }

  private int ans = 0;

  private void dfs(TreeNode root, int path) {
    if (root == null)
      return;
    if (root.left == null && root.right == null) {
      ans += path * 10 + root.val;
      return;
    }

    dfs(root.left, path * 10 + root.val);
    dfs(root.right, path * 10 + root.val);
  }
}
