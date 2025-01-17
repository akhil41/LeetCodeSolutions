# Language: Python
# Commit Timestamp: 2033-07-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-07-30T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;

    ranges::sort(intervals);

    for (const vector<int>& interval : intervals)
      if (ans.empty() || ans.back()[1] < interval[0])
        ans.push_back(interval);
      else
        ans.back()[1] = max(ans.back()[1], interval[1]);

    return ans;
  }
};
