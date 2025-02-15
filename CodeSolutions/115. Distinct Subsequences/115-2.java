# Language: Python
# Commit Timestamp: 2033-11-27T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-11-27T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public int numDistinct(String s, String t) {
    final int m = s.length();
    final int n = t.length();
    long[] dp = new long[n + 1];
    dp[0] = 1;

    for (int i = 1; i <= m; ++i)
      for (int j = n; j >= 1; --j)
        if (s.charAt(i - 1) == t.charAt(j - 1))
          dp[j] += dp[j - 1];

    return (int) dp[n];
  }
}
