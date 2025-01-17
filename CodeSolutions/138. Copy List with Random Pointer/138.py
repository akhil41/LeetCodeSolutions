# Language: Python
# Commit Timestamp: 2033-01-01T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-01-01T00:00:00-04:00
# Solution Logic: Placeholder for explanation.

class Solution:
  def copyRandomList(self, head: 'Node') -> 'Node':
    if not head:
      return None
    if head in self.map:
      return self.map[head]

    newNode = Node(head.val)
    self.map[head] = newNode
    newNode.next = self.copyRandomList(head.next)
    newNode.random = self.copyRandomList(head.random)
    return newNode

  map = {}
