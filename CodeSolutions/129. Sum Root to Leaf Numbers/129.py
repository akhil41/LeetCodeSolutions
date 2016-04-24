// Language: C++
// Commit Timestamp: 2016-12-26T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-12-26T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-12-26T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def sumNumbers(self, root: TreeNode | None) -> int:
    ans = 0

    def dfs(root: TreeNode | None, path: int) -> None:
      nonlocal ans
      if not root:
        return
      if not root.left and not root.right:
        ans += path * 10 + root.val
        return

      dfs(root.left, path * 10 + root.val)
      dfs(root.right, path * 10 + root.val)

    dfs(root, 0)
    return ans
