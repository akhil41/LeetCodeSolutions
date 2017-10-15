# Language: Python
# Commit Timestamp: 2023-06-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-06-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-06-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  void recoverTree(TreeNode* root) {
    inorder(root);
    swap(x, y);
  }

 private:
  TreeNode* pred = nullptr;
  TreeNode* x = nullptr;  // the first wrong node
  TreeNode* y = nullptr;  // the second wrong node

  void inorder(TreeNode* root) {
    if (root == nullptr)
      return;

    inorder(root->left);

    if (pred && root->val < pred->val) {
      y = root;
      if (x == nullptr)
        x = pred;
      else
        return;
    }
    pred = root;

    inorder(root->right);
  }

  void swap(TreeNode* x, TreeNode* y) {
    const int temp = x->val;
    x->val = y->val;
    y->val = temp;
  }
};
