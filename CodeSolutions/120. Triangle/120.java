# Language: Python
# Commit Timestamp: 2028-04-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-04-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int minimumTotal(List<List<Integer>> triangle) {
    for (int i = triangle.size() - 2; i >= 0; --i)
      for (int j = 0; j <= i; ++j)
        triangle.get(i).set(j, triangle.get(i).get(j) + Math.min(triangle.get(i + 1).get(j),
                                                                 triangle.get(i + 1).get(j + 1)));
    return triangle.get(0).get(0);
  }
}
