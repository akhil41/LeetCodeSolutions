# Language: Python
# Commit Timestamp: 2030-04-17T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-04-17T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def rightSideView(self, root: TreeNode | None) -> list[int]:
    ans = []

    def dfs(root: TreeNode | None, depth: int) -> None:
      if not root:
        return

      if depth == len(ans):
        ans.append(root.val)
      dfs(root.right, depth + 1)
      dfs(root.left, depth + 1)

    dfs(root, 0)
    return ans
