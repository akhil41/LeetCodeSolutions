# Language: Python
# Commit Timestamp: 2030-11-13T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-11-13T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int findMin(vector<int>& nums) {
    int l = 0;
    int r = nums.size() - 1;

    while (l < r) {
      const int m = (l + r) / 2;
      if (nums[m] < nums[r])
        r = m;
      else
        l = m + 1;
    }

    return nums[l];
  }
};
