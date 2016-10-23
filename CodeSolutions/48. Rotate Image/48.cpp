// Language: Java
// Commit Timestamp: 2020-01-10T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-01-10T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-01-10T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    ranges::reverse(matrix);
    for (int i = 0; i < matrix.size(); ++i)
      for (int j = i + 1; j < matrix.size(); ++j)
        swap(matrix[i][j], matrix[j][i]);
  }
};
