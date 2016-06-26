// Language: C++
// Commit Timestamp: 2017-12-21T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-12-21T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2017-12-21T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int ans;
    int count = 0;

    for (const int num : nums) {
      if (count == 0)
        ans = num;
      count += num == ans ? 1 : -1;
    }

    return ans;
  }
};
