# Language: Python
# Commit Timestamp: 2022-10-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-10-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-10-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  void recoverTree(TreeNode* root) {
    TreeNode* pred = nullptr;
    TreeNode* x = nullptr;  // the first wrong node
    TreeNode* y = nullptr;  // the second wrong node

    stack<TreeNode*> stack;

    while (root != nullptr || !stack.empty()) {
      while (root != nullptr) {
        stack.push(root);
        root = root->left;
      }
      root = stack.top(), stack.pop();
      if (pred && root->val < pred->val) {
        y = root;
        if (x == nullptr)
          x = pred;
      }
      pred = root;
      root = root->right;
    }

    swap(x, y);
  }

  void swap(TreeNode* x, TreeNode* y) {
    const int temp = x->val;
    x->val = y->val;
    y->val = temp;
  }
};
