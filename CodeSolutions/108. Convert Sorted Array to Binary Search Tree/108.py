# Language: Python
# Commit Timestamp: 2029-11-18T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2029-11-18T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def sortedArrayToBST(self, nums: list[int]) -> TreeNode | None:
    def build(l: int, r: int) -> TreeNode | None:
      if l > r:
        return None
      m = (l + r) // 2
      return TreeNode(nums[m],
                      build(l, m - 1),
                      build(m + 1, r))

    return build(0, len(nums) - 1)
