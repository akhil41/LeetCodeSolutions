// Language: Java
// Commit Timestamp: 2019-04-15T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-04-15T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-04-15T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int ans = INT_MIN;
    int sum = 0;

    for (const int num : nums) {
      sum = max(num, sum + num);
      ans = max(ans, sum);
    }

    return ans;
  }
};
