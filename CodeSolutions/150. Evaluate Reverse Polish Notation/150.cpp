# Language: Python
# Commit Timestamp: 2028-11-23T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-11-23T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int evalRPN(vector<string>& tokens) {
    stack<long> stack;
    const unordered_map<string, function<long(long, long)>> op{
        {"+", std::plus<long>()},
        {"-", std::minus<long>()},
        {"*", std::multiplies<long>()},
        {"/", std::divides<long>()}};

    for (const string& token : tokens)
      if (op.contains(token)) {
        const long b = stack.top();
        stack.pop();
        const long a = stack.top();
        stack.pop();
        stack.push(op.at(token)(a, b));
      } else {
        stack.push(stoi(token));
      }

    return stack.top();
  }
};
