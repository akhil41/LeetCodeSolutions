# Language: Python
# Commit Timestamp: 2026-07-07T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2026-07-07T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    postorder(root, ans);
    return ans;
  }

 private:
  void postorder(TreeNode* root, vector<int>& ans) {
    if (root == nullptr)
      return;

    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->val);
  }
};
