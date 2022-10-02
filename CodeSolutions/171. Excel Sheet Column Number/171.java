# Language: Python
# Commit Timestamp: 2029-06-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2029-06-21T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int titleToNumber(String columnTitle) {
    return columnTitle.chars().reduce(0, (subtotal, c) -> subtotal * 26 + c - '@');
  }
}
