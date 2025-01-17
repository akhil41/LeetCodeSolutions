# Language: Python
# Commit Timestamp: 2033-04-01T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

# Language: Python
# Commit Timestamp: 2033-04-01T00:00:00-03:00
# Solution Logic: Placeholder for explanation.

class Solution {
  public Node cloneGraph(Node node) {
    if (node == null)
      return null;
    if (map.containsKey(node))
      return map.get(node);

    Node newNode = new Node(node.val);
    map.put(node, newNode);

    for (Node neighbor : node.neighbors)
      newNode.neighbors.add(cloneGraph(neighbor));

    return newNode;
  }

  private Map<Node, Node> map = new HashMap<>();
}
