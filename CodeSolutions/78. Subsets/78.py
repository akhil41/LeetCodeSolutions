// Language: Java
// Commit Timestamp: 2020-10-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-10-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-10-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def subsets(self, nums: list[int]) -> list[list[int]]:
    ans = []

    def dfs(s: int, path: list[int]) -> None:
      ans.append(path)

      for i in range(s, len(nums)):
        dfs(i + 1, path + [nums[i]])

    dfs(0, [])
    return ans
