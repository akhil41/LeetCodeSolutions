# Language: Python
# Commit Timestamp: 2032-05-06T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2032-05-06T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
      return "";

    for (int i = 0; i < strs[0].length(); ++i)
      for (int j = 1; j < strs.size(); ++j)
        if (i == strs[j].length() || strs[j][i] != strs[0][i])
          return strs[0].substr(0, i);

    return strs[0];
  }
};
