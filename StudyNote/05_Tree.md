# Tree Notes

## Description

### 2.1 What is a Tree?
A **Tree** is a hierarchical structure consisting of nodes connected by edges.
* **Key Constraint**: It must be **acyclic** (no loops).
* **Components**:
    * **Root**: The topmost node.
    * **Parent/Child**: Direct hierarchical relationship.
    * **Leaf**: A node with no children.
* **Real-world Analogy**: File system directories, HTML DOM structure.

### 2.2 Binary Tree (BT)
A specific type of tree where every node has **at most two children**.
* **Degree**: $\le 2$ (0, 1, or 2).
* **Structure**: Distinguished strictly as **Left Child** and **Right Child**.

### 2.3 Binary Search Tree (BST)
A Binary Tree optimized for searching. It enforces a strict ordering property:
> **Rule**: $\forall$ Node $N$, values in the **Left Subtree** $< N <$ values in the **Right Subtree**.

---