# Language: Python
# Commit Timestamp: 2033-06-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-06-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int mySqrt(int x) {
    unsigned l = 1;
    unsigned r = x + 1u;

    while (l < r) {
      const unsigned m = (l + r) / 2;
      if (m > x / m)
        r = m;
      else
        l = m + 1;
    }

    // l := the minimum number s.t. l * l > x
    return l - 1;
  }
};
