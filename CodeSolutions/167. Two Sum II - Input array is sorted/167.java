# Language: Python
# Commit Timestamp: 2022-07-28T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-07-28T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2022-07-28T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int[] twoSum(int[] numbers, int target) {
    int l = 0;
    int r = numbers.length - 1;

    while (numbers[l] + numbers[r] != target)
      if (numbers[l] + numbers[r] < target)
        ++l;
      else
        --r;

    return new int[] {l + 1, r + 1};
  }
}
