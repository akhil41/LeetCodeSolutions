# Language: Python
# Commit Timestamp: 2036-01-16T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2036-01-16T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public ListNode reverseList(ListNode head) {
    ListNode prev = null;

    while (head != null) {
      ListNode next = head.next;
      head.next = prev;
      prev = head;
      head = next;
    }

    return prev;
  }
}
