// Language: Java
// Commit Timestamp: 2018-02-19T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-02-19T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2018-02-19T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public int majorityElement(int[] nums) {
    Integer ans = null;
    int count = 0;

    for (final int num : nums) {
      if (count == 0)
        ans = num;
      count += num == ans ? 1 : -1;
    }

    return ans;
  }
}
