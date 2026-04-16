#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;

// 🔹 Push Operation
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = value;
    cout << value << " pushed into stack\n";
}

// 🔹 Pop Operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << stack[top--] << " popped from stack\n";
}

// 🔹 Peek Operation
void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top element is: " << stack[top] << endl;
}

// 🔹 Display Stack
void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}