A singly linked list is a linear data structure where each element (called a node) contains two parts:<br>
.data: stores the value.<br>
.next: a pointer to the next node.<br>
The list is connected in one direction and is accessed through a pointer called head, which points to the first node.<br>
This program implements:
<br>
.Insertion (at start, end, and specific position)<br>
.Deletion (from start, end, and specific position)<br>
.Traversal (displaying the list)<br>

Each function manipulates the head pointer and the next pointers to maintain the structure of the list.<br>
Algorithms<br>
1. Insert at Beginning (insert_before)<br>
Purpose: Add a new node at the start of the list.<br>

Algorithm:<br>
Create a new node.<br>
Set new_node->next = head.<br>
Update head = new_node.<br>

2. Insert at End (insert_after)<br>
Purpose: Add a new node at the end of the list.<br>

Algorithm:<br>
Create a new node.<br>
If head is nullptr, set head = new_node.<br>
Else:<br>
Traverse using a temporary pointer temp until temp->next == nullptr.<br>
Set temp->next = new_node.<br>

Insert at Position (insert_position)<br>
Purpose: Insert a node at a specific position (1-based index).<br>

Algorithm:<br>
Create a new node.<br>
If pos == 1, do the same as insert_before.<br>
Else:<br>
Use a loop to traverse to position pos - 1.<br>
If pointer is nullptr, position is invalid.<br>
Set new_node->next = temp->next, then temp->next = new_node.<br>

4. Delete from Beginning (deletion_start)<br>
Purpose: Delete the first node of the list.<br>

Algorithm:<br>
Check if head == nullptr. If yes, display error.<br>
Store head in a temporary pointer temp.<br>
Move head = head->next.<br>
Delete temp.<br>

5. Delete from End (deletion_end)<br>
Purpose: Delete the last node of the list.<br>

Algorithm:<br>
If head == nullptr, display error.<br>
If head->next == nullptr, delete head and set head = nullptr.<br>
Else:<br>
Use temp to traverse until temp->next->next == nullptr (second last node).<br>
Delete temp->next.<br>
Set temp->next = nullptr.<br>

 6. Delete at Position (deletion_position)<br>
Purpose: Delete node at a specific position (1-based).<br>

Algorithm:<br>
If head == nullptr, display error.<br>
If pos == 1, use deletion_start logic.<br>
Else:<br>
Use a loop to reach the node before the one to delete (i.e., position pos - 1).<br>
If temp == nullptr or temp->next == nullptr, position is invalid.<br>
Store temp->next in delNode.<br>
Set temp->next = delNode->next.<br>
Delete delNode.
<br>
7. Display (display)<br>
Purpose: Print all nodes in the list.<br>

Algorithm:<br>
Start from head.<br>
While temp != nullptr:<br>
Print temp->data.<br>
Move to temp = temp->next.<br>
<br>
THANK U!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
