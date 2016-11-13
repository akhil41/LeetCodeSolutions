// Language: Java
// Commit Timestamp: 2020-02-09T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-02-09T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-02-09T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
  public int lengthOfLastWord(String s) {
    int i = s.length() - 1;

    while (i >= 0 && s.charAt(i) == ' ')
      --i;
    final int lastIndex = i;
    while (i >= 0 && s.charAt(i) != ' ')
      --i;

    return lastIndex - i;
  }
}
