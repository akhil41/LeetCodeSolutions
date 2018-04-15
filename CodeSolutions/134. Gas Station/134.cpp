# Language: Python
# Commit Timestamp: 2025-01-13T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-01-13T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    const int gasSum = accumulate(gas.begin(), gas.end(), 0);
    const int costSum = accumulate(cost.begin(), cost.end(), 0);
    if (gasSum - costSum < 0)
      return -1;

    int ans = 0;
    int sum = 0;

    // Try to start from each index.
    for (int i = 0; i < gas.size(); ++i) {
      sum += gas[i] - cost[i];
      if (sum < 0) {
        sum = 0;
        ans = i + 1;  // Start from the next index.
      }
    }

    return ans;
  }
};
