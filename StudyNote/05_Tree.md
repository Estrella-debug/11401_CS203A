# Tree Notes

## Description
### What is a Tree?
A **Tree** is a hierarchical structure consisting of nodes connected by edges.
* **Key Constraint**: It must be **acyclic** (no loops).
* **Components**:
    * **Root**: The topmost node.
    * **Parent/Child**: Direct hierarchical relationship.
    * **Leaf**: A node with no children.
* **Real-world Analogy**: File system directories, HTML DOM structure.

### Binary Tree (BT)
A specific type of tree where every node has **at most two children**.
* **Degree**: $\le 2$ (0, 1, or 2).
* **Structure**: Distinguished strictly as **Left Child** and **Right Child**.

### Binary Search Tree (BST)
A binary tree where for **every node `N`**:

* All keys in `N->left` subtree are **less than** `N->key`.
* All keys in `N->right` subtree are **greater than** `N->key`.
* Both left and right subtrees must also be BSTs themselves.