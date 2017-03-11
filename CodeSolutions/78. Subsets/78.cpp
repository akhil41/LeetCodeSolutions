// Language: Java
// Commit Timestamp: 2020-09-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-09-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-09-06T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    dfs(nums, 0, {}, ans);
    return ans;
  }

 private:
  void dfs(const vector<int>& nums, int s, vector<int>&& path,
           vector<vector<int>>& ans) {
    ans.push_back(path);

    for (int i = s; i < nums.size(); ++i) {
      path.push_back(nums[i]);
      dfs(nums, i + 1, std::move(path), ans);
      path.pop_back();
    }
  }
};