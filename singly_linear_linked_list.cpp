#include <iostream>
#define nullptr 0
using namespace std;
class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = nullptr;
    }
};
// Insert at the beginning
void insert_before(node*& head, int item) {
    node* new_node = new node(item);
    new_node->next = head;
    head = new_node;
}
// Insert at the end
void insert_after(node*& head, int item) {
    node* new_node = new node(item);
    if (head == nullptr) {
        head = new_node;
        return;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
}
// Insert at specific position (1-based index)
void insert_position(node*& head, int item, int pos) {
    node* new_node = new node(item);
    if (pos == 1) {
        new_node->next = head;
        head = new_node;
        return;
    }
    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
// Delete from beginning
void deletion_start(node*& head) {
    if (head == nullptr) {
        cout << "No data to delete!" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}
// Delete from end
void deletion_end(node*& head) {
    if (head == nullptr) {
        cout << "No data to delete!" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
// Delete at specific position
void deletion_position(node*& head, int pos) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (pos == 1) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range!" << endl;
        return;
    }
    node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}
// Display list
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// Main function
int main() {
    node* head = nullptr;

    insert_before(head, 10);     
    insert_after(head, 30);       
    insert_after(head, 40);       
    display(head);                

    insert_before(head, 20);      
    display(head);

    insert_position(head, 50, 3); 
    display(head);

    deletion_start(head);         
    display(head);

    deletion_end(head);           
    display(head);

    deletion_position(head, 2);  
    display(head);                

    return 0;
}

