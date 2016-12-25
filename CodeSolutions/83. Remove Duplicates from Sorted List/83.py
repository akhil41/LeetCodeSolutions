// Language: Java
// Commit Timestamp: 2020-06-08T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-06-08T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

// Language: Java
// Commit Timestamp: 2020-06-08T00:00:00+05:30
// Solution Logic: Placeholder for explanation.

class Solution:
  def deleteDuplicates(self, head: ListNode) -> ListNode:
    curr = head

    while curr:
      while curr.next and curr.val == curr.next.val:
        curr.next = curr.next.next
      curr = curr.next

    return head
