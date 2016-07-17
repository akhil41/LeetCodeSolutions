// Language: Java
// Commit Timestamp: 2018-04-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-04-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-04-20T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int ans = 0;
    vector<int> count(128);

    for (int l = 0, r = 0; r < s.length(); ++r) {
      ++count[s[r]];
      while (count[s[r]] > 1)
        --count[s[l++]];
      ans = max(ans, r - l + 1);
    }

    return ans;
  }
};
