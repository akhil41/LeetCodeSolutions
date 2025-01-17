# Language: Python
# Commit Timestamp: 2033-09-28T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-09-28T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public boolean isIsomorphic(String s, String t) {
    Map<Character, Integer> charToIndex_s = new HashMap<>();
    Map<Character, Integer> charToIndex_t = new HashMap<>();

    for (Integer i = 0; i < s.length(); ++i)
      if (charToIndex_s.put(s.charAt(i), i) != charToIndex_t.put(t.charAt(i), i))
        return false;

    return true;
  }
}
