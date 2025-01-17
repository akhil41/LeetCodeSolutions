# Language: Python
# Commit Timestamp: 2032-10-03T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2032-10-03T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  string convertToTitle(int n) {
    return n == 0 ? ""
                  : convertToTitle((n - 1) / 26) + (char)('A' + ((n - 1) % 26));
  }
};
