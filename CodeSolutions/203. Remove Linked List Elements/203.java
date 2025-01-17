# Language: Python
# Commit Timestamp: 2036-08-13T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2036-08-13T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public ListNode removeElements(ListNode head, int val) {
    ListNode dummy = new ListNode(0, head);
    ListNode prev = dummy;

    for (; head != null; head = head.next)
      if (head.val != val) {
        prev.next = head;
        prev = prev.next;
      }
    prev.next = null; // In case that the last value equals `val`.

    return dummy.next;
  }
}
