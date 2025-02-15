// Language: C++
// Commit Timestamp: 2016-06-29T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-06-29T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: C++
// Commit Timestamp: 2016-06-29T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution {
 public:
  int trap(vector<int>& height) {
    if (height.empty())
      return 0;

    int ans = 0;
    int l = 0;
    int r = height.size() - 1;
    int maxL = height[l];
    int maxR = height[r];

    while (l < r)
      if (maxL < maxR) {
        ans += maxL - height[l];
        maxL = max(maxL, height[++l]);
      } else {
        ans += maxR - height[r];
        maxR = max(maxR, height[--r]);
      }

    return ans;
  }
};
