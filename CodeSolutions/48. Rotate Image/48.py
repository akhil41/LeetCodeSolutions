// Language: Java
// Commit Timestamp: 2019-12-11T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-12-11T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2019-12-11T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def rotate(self, matrix: list[list[int]]) -> None:
    matrix.reverse()

    for i in range(len(matrix)):
      for j in range(i + 1, len(matrix)):
        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
