# Language: Python
# Commit Timestamp: 2034-09-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2034-09-23T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int[] plusOne(int[] digits) {
    for (int i = digits.length - 1; i >= 0; i--) {
      if (digits[i] < 9) {
        ++digits[i];
        return digits;
      }
      digits[i] = 0;
    }

    int[] ans = new int[digits.length + 1];
    ans[0] = 1;
    return ans;
  }
}
