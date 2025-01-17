# Language: Python
# Commit Timestamp: 2034-06-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-06-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (const int num : nums)
      if (i < 2 || num > nums[i - 2])
        nums[i++] = num;

    return i;
  }
};
