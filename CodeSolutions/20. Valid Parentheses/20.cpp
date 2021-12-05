# Language: Python
# Commit Timestamp: 2028-08-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-08-25T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  bool isValid(string s) {
    stack<char> stack;

    for (const char c : s)
      if (c == '(')
        stack.push(')');
      else if (c == '{')
        stack.push('}');
      else if (c == '[')
        stack.push(']');
      else if (stack.empty() || pop(stack) != c)
        return false;

    return stack.empty();
  }

 private:
  int pop(stack<char>& stack) {
    const int c = stack.top();
    stack.pop();
    return c;
  }
};
