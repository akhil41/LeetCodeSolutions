// Language: C++
// Commit Timestamp: 2016-05-30T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-05-30T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-05-30T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def trap(self, height: list[int]) -> int:
    if not height:
      return 0

    ans = 0
    l = 0
    r = len(height) - 1
    maxL = height[l]
    maxR = height[r]

    while l < r:
      if maxL < maxR:
        ans += maxL - height[l]
        l += 1
        maxL = max(maxL, height[l])
      else:
        ans += maxR - height[r]
        r -= 1
        maxR = max(maxR, height[r])

    return ans
