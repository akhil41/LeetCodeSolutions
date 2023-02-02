# Language: Python
# Commit Timestamp: 2029-10-19T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2029-10-19T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  bool isValidBST(TreeNode* root) {
    stack<TreeNode*> stack;
    TreeNode* pred = nullptr;

    while (root != nullptr || !stack.empty()) {
      while (root != nullptr) {
        stack.push(root);
        root = root->left;
      }
      root = stack.top(), stack.pop();
      if (pred && pred->val >= root->val)
        return false;
      pred = root;
      root = root->right;
    }

    return true;
  }
};
