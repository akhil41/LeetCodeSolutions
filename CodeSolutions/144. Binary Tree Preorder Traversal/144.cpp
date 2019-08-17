# Language: Python
# Commit Timestamp: 2026-05-08T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2026-05-08T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    preorder(root, ans);
    return ans;
  }

 private:
  void preorder(TreeNode* root, vector<int>& ans) {
    if (root == nullptr)
      return;

    ans.push_back(root->val);
    preorder(root->left, ans);
    preorder(root->right, ans);
  }
};
