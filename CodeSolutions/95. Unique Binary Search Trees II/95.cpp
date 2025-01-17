# Language: Python
# Commit Timestamp: 2034-04-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-04-26T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  vector<TreeNode*> generateTrees(int n) {
    if (n == 0)
      return {};
    return generateTrees(1, n);
  }

 private:
  vector<TreeNode*> generateTrees(int min, int max) {
    if (min > max)
      return {nullptr};

    vector<TreeNode*> ans;

    for (int i = min; i <= max; ++i)
      for (TreeNode* left : generateTrees(min, i - 1))
        for (TreeNode* right : generateTrees(i + 1, max)) {
          ans.push_back(new TreeNode(i));
          ans.back()->left = left;
          ans.back()->right = right;
        }

    return ans;
  }
};
