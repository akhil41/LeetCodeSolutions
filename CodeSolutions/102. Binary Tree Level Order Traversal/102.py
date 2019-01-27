# Language: Python
# Commit Timestamp: 2025-10-10T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-10-10T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def levelOrder(self, root: TreeNode | None) -> list[list[int]]:
    if not root:
      return []

    ans = []
    q = collections.deque([root])

    while q:
      currLevel = []
      for _ in range(len(q)):
        node = q.popleft()
        currLevel.append(node.val)
        if node.left:
          q.append(node.left)
        if node.right:
          q.append(node.right)
      ans.append(currLevel)

    return ans
