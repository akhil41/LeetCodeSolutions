# Language: Python
# Commit Timestamp: 2036-09-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2036-09-12T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  bool isPalindrome(string s) {
    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isalnum(s[l]))
        ++l;
      while (l < r && !isalnum(s[r]))
        --r;
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      ++l;
      --r;
    }

    return true;
  }
};
