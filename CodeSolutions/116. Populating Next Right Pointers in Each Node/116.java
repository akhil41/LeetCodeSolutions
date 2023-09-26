# Language: Python
# Commit Timestamp: 2030-05-17T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2030-05-17T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public Node connect(Node root) {
    if (root == null)
      return null;
    connectTwoNodes(root.left, root.right);
    return root;
  }

  private void connectTwoNodes(Node p, Node q) {
    if (p == null)
      return;
    p.next = q;
    connectTwoNodes(p.left, p.right);
    connectTwoNodes(q.left, q.right);
    connectTwoNodes(p.right, q.left);
  }
}
