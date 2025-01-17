# Language: Python
# Commit Timestamp: 2035-05-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2035-05-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;

    for (int i = 0; i < 32; ++i)
      if (n >> i & 1)
        ans |= 1 << 31 - i;

    return ans;
  }
};
