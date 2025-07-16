A singly linked list is a linear data structure where each element (called a node) contains two parts:
.data: stores the value.
.next: a pointer to the next node.
The list is connected in one direction and is accessed through a pointer called head, which points to the first node.
This program implements:

.Insertion (at start, end, and specific position)
.Deletion (from start, end, and specific position)
.Traversal (displaying the list)

Each function manipulates the head pointer and the next pointers to maintain the structure of the list.
Algorithms
1. Insert at Beginning (insert_before)
Purpose: Add a new node at the start of the list.

Algorithm:
i)Create a new node.
ii)Set new_node->next = head.
iii)Update head = new_node.

2. Insert at End (insert_after)
Purpose: Add a new node at the end of the list.

Algorithm:
Create a new node.
If head is nullptr, set head = new_node.
Else:
Traverse using a temporary pointer temp until temp->next == nullptr.
Set temp->next = new_node.

Insert at Position (insert_position)
Purpose: Insert a node at a specific position (1-based index).

Algorithm:
Create a new node.
If pos == 1, do the same as insert_before.
Else:
Use a loop to traverse to position pos - 1.
If pointer is nullptr, position is invalid.
Set new_node->next = temp->next, then temp->next = new_node.

4. Delete from Beginning (deletion_start)
Purpose: Delete the first node of the list.

Algorithm:
Check if head == nullptr. If yes, display error.
Store head in a temporary pointer temp.
Move head = head->next.
Delete temp.

5. Delete from End (deletion_end)
Purpose: Delete the last node of the list.

Algorithm:
If head == nullptr, display error.
If head->next == nullptr, delete head and set head = nullptr.
Else:
Use temp to traverse until temp->next->next == nullptr (second last node).
Delete temp->next.
Set temp->next = nullptr.

 6. Delete at Position (deletion_position)
Purpose: Delete node at a specific position (1-based).

Algorithm:
If head == nullptr, display error.
If pos == 1, use deletion_start logic.
Else:
Use a loop to reach the node before the one to delete (i.e., position pos - 1).
If temp == nullptr or temp->next == nullptr, position is invalid.
Store temp->next in delNode.
Set temp->next = delNode->next.
Delete delNode.

7. Display (display)
Purpose: Print all nodes in the list.

Algorithm:
Start from head.
While temp != nullptr:
Print temp->data.
Move to temp = temp->next.

THANK U!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
