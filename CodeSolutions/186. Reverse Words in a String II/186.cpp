# Language: Python
# Commit Timestamp: 2034-11-22T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-11-22T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  void reverseWords(vector<char>& s) {
    ranges::reverse(s);         // Reverse the whole string.
    reverseWords(s, s.size());  // Reverse each word.
  }

 private:
  void reverseWords(vector<char>& s, int n) {
    int i = 0;
    int j = 0;

    while (i < n) {
      while (i < j || i < n && s[i] == ' ')  // Skip the spaces.
        ++i;
      while (j < i || j < n && s[j] != ' ')  // Skip the spaces.
        ++j;
      reverse(s.begin() + i, s.begin() + j);  // Reverse the word.
    }
  }
};
