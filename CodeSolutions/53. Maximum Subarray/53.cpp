// Language: Java
// Commit Timestamp: 2018-11-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-11-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-11-16T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    // dp[i] := the maximum sum subarray ending in i
    vector<int> dp(nums.size());

    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i)
      dp[i] = max(nums[i], dp[i - 1] + nums[i]);

    return ranges::max(dp);
  }
};
