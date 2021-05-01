# Language: Python
# Commit Timestamp: 2028-01-28T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-01-28T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  TreeNode* upsideDownBinaryTree(TreeNode* root) {
    if (root == nullptr || root->left == nullptr)
      return root;

    TreeNode* newRoot = upsideDownBinaryTree(root->left);
    root->left->left = root->right;  // 2's left = 3 (root's right)
    root->left->right = root;        // 2's right = 1 (root)
    root->left = nullptr;
    root->right = nullptr;
    return newRoot;
  }
};
