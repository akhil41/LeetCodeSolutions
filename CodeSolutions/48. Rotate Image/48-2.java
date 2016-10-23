// Language: Java
// Commit Timestamp: 2019-08-13T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-08-13T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-08-13T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public void rotate(int[][] matrix) {
    for (int mn = 0; mn < matrix.length / 2; ++mn) {
      final int mx = matrix.length - mn - 1;
      for (int i = mn; i < mx; ++i) {
        final int offset = i - mn;
        final int top = matrix[mn][i];
        matrix[mn][i] = matrix[mx - offset][mn];
        matrix[mx - offset][mn] = matrix[mx][mx - offset];
        matrix[mx][mx - offset] = matrix[i][mx];
        matrix[i][mx] = top;
      }
    }
  }
}
