# Language: Python
# Commit Timestamp: 2027-02-02T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2027-02-02T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def lengthOfLongestSubstringTwoDistinct(self, s: str) -> int:
    ans = 0
    distinct = 0
    count = [0] * 128

    l = 0
    for r, c in enumerate(s):
      count[ord(c)] += 1
      if count[ord(c)] == 1:
        distinct += 1
      while distinct == 3:
        count[ord(s[l])] -= 1
        if count[ord(s[l])] == 0:
          distinct -= 1
        l += 1
      ans = max(ans, r - l + 1)

    return ans
