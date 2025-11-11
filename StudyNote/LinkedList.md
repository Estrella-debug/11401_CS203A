# Linked List notes

## Description
**Linked List:** A linear sequence of nodes where elements are stored in non-contiguous memory locations. Each node comprises two parts: a data field (value) and a pointer/reference field that links to the next node in the sequence. While traversal is sequential O(n), insertion or deletion (when the preceding node is known) is highly efficient at O(1).

## Visualization
![Linked List](./image/LinkedList.png)

## Abstract Data Type
A linked list is an ADT defined by the following core operations.

| Operation | Description | Time Complexity (General) |
| :--- | :--- | :--- |
| **Create** | Initialize an empty linked list (e.g., set the `head` pointer to NULL). | O(1) |
| **Insert** | Add a new node at a specific position. | O(1) (At head or after a known node) / O(n) (At tail or specific index) |
| **Delete** | Remove a node at a specific position. | O(1) (Node is known and not the head) / O(n) (By value or index) |
| **Search** | Find a node containing a specific value. | O(n) |
| **Traverse** | Visit each node in the linked list sequentially. | O(n) |
| **Update** | Modify the value of a node at a specific position (requires prior search/access). | O(1) (Node is known) / O(n) (By index) |

Linked lists are crucial for tasks requiring **dynamic memory usage** and **frequent insertion/deletion** operations, offering advantages over fixed-size arrays.
