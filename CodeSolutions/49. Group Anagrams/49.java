# Language: Python
# Commit Timestamp: 2025-11-09T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2025-11-09T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public List<List<String>> groupAnagrams(String[] strs) {
    Map<String, List<String>> keyToAnagrams = new HashMap<>();

    for (final String str : strs) {
      char[] chars = str.toCharArray();
      Arrays.sort(chars);
      String key = String.valueOf(chars);
      keyToAnagrams.computeIfAbsent(key, k -> new ArrayList<>()).add(str);
    }

    return new ArrayList<>(keyToAnagrams.values());
  }
}
