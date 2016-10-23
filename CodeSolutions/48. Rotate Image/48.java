// Language: Java
// Commit Timestamp: 2019-09-12T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-09-12T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-09-12T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public void rotate(int[][] matrix) {
    for (int i = 0, j = matrix.length - 1; i < j; ++i, --j) {
      int[] temp = matrix[i];
      matrix[i] = matrix[j];
      matrix[j] = temp;
    }

    for (int i = 0; i < matrix.length; ++i)
      for (int j = i + 1; j < matrix.length; ++j) {
        final int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
  }
}
