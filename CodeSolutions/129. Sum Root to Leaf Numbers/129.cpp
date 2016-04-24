// Language: C++
// Commit Timestamp: 2017-01-25T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-01-25T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-01-25T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int sumNumbers(TreeNode* root) {
    int ans = 0;
    dfs(root, 0, ans);
    return ans;
  }

 private:
  void dfs(TreeNode* root, int path, int& ans) {
    if (root == nullptr)
      return;
    if (root->left == nullptr && root->right == nullptr) {
      ans += path * 10 + root->val;
      return;
    }

    dfs(root->left, path * 10 + root->val, ans);
    dfs(root->right, path * 10 + root->val, ans);
  }
};
