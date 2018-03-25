# Language: Python
# Commit Timestamp: 2024-11-14T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-11-14T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2024-11-14T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int minPathSum(int[][] grid) {
    final int m = grid.length;
    final int n = grid[0].length;

    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (i > 0 && j > 0)
          grid[i][j] += Math.min(grid[i - 1][j], grid[i][j - 1]);
        else if (i > 0)
          grid[i][0] += grid[i - 1][0];
        else if (j > 0)
          grid[0][j] += grid[0][j - 1];

    return grid[m - 1][n - 1];
  }
}
