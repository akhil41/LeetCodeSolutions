# Language: Python
# Commit Timestamp: 2025-05-13T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-05-13T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int hammingWeight(uint32_t n) {
    int ans = 0;

    for (int i = 0; i < 32; ++i)
      if ((n >> i) & 1)
        ++ans;

    return ans;
  }
};
