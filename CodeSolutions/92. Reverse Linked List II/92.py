# Language: Python
# Commit Timestamp: 2023-08-22T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-08-22T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2023-08-22T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def reverseBetween(
      self,
      head: ListNode | None,
      left: int,
      right: int,
  ) -> ListNode | None:
    if left == 1:
      return self.reverseN(head, right)

    head.next = self.reverseBetween(head.next, left - 1, right - 1)
    return head

  def reverseN(self, head: ListNode | None, n: int) -> ListNode | None:
    if n == 1:
      return head

    newHead = self.reverseN(head.next, n - 1)
    headNext = head.next
    head.next = headNext.next
    headNext.next = head
    return newHead
