# Language: Python
# Commit Timestamp: 2021-04-04T00:00:00+05:30
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2021-04-04T00:00:00+05:30
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2021-04-04T00:00:00+05:30
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  string fractionToDecimal(int numerator, int denominator) {
    if (numerator == 0)
      return "0";

    string ans;

    if (numerator < 0 ^ denominator < 0)
      ans += "-";

    long n = labs(numerator);
    long d = labs(denominator);
    ans += to_string(n / d);

    if (n % d == 0)
      return ans;

    ans += '.';
    unordered_map<int, int> seen;

    for (long r = n % d; r; r %= d) {
      if (const auto it = seen.find(r); it != seen.cend()) {
        ans.insert(it->second, 1, '(');
        ans += ')';
        break;
      }
      seen[r] = ans.size();
      r *= 10;
      ans += to_string(r / d);
    }

    return ans;
  }
};
