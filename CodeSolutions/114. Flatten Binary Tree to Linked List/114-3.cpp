# Language: Python
# Commit Timestamp: 2034-02-25T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-02-25T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  void flatten(TreeNode* root) {
    if (root == nullptr)
      return;

    while (root != nullptr) {
      if (root->left != nullptr) {
        // Find the rightmost root.
        TreeNode* rightmost = root->left;
        while (rightmost->right != nullptr)
          rightmost = rightmost->right;
        // Rewire the connections.
        rightmost->right = root->right;
        root->right = root->left;
        root->left = nullptr;
      }
      // Move on to the right side of the tree.
      root = root->right;
    }
  }
};
