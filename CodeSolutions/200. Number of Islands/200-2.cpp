// Language: Java
// Commit Timestamp: 2018-08-18T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-08-18T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-08-18T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int numIslands(vector<vector<char>>& grid) {
    int ans = 0;

    for (int i = 0; i < grid.size(); ++i)
      for (int j = 0; j < grid[0].size(); ++j)
        if (grid[i][j] == '1') {
          dfs(grid, i, j);
          ++ans;
        }

    return ans;
  }

 private:
  void dfs(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size())
      return;
    if (grid[i][j] != '1')
      return;

    grid[i][j] = '2';  // Mark '2' as visited.
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
  }
};
