# Language: Python
# Commit Timestamp: 2031-01-12T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2031-01-12T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int i = 0;

    for (int reach = 0; i < nums.size() && i <= reach; ++i)
      reach = max(reach, i + nums[i]);

    return i == nums.size();
  }
};
