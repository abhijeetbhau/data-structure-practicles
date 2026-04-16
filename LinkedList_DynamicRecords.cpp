#include <iostream> 
using namespace std; 

// Node structure 
struct Node { 
    int data; 
    Node* next; 
}; 
 
Node* head = NULL; 
 
// Insert at end 
void insert(int value) { 
    Node* newNode = new Node(); 
    newNode->data = value; 
    newNode->next = NULL; 
 
    if (head == NULL) { 
        head = newNode; 
    } else { 
        Node* temp = head; 
        while (temp->next != NULL) { 
            temp = temp->next; 
        } 
        temp->next = newNode; 
    } 
} 
 
// Display linked list 
void display() { 
    Node* temp = head; 
    if (temp == NULL) { 
        cout << "List is empty"; 
        return; 
    } 
 
    while (temp != NULL) { 
        cout << temp->data << " -> "; 
        temp = temp->next; 
    } 
    cout << "NULL"; 
} 
 
int main() { 
    insert(10); 
    insert(20); 
    insert(30); 
 
    cout << "Linked List: "; 
    display(); 
 
    return 0; 
}