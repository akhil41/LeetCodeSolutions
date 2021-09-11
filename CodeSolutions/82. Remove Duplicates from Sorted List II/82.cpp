# Language: Python
# Commit Timestamp: 2028-05-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2028-05-27T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode dummy(0, head);
    ListNode* prev = &dummy;

    while (head != nullptr) {
      while (head->next && head->val == head->next->val)
        head = head->next;
      if (prev->next == head)
        prev = prev->next;
      else
        prev->next = head->next;
      head = head->next;
    }

    return dummy.next;
  }
};
