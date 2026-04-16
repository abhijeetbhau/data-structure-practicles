#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// 🔹 Enqueue Operation
void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1) front = 0;

    queue[++rear] = value;
    cout << value << " inserted into queue\n";
}

// 🔹 Dequeue Operation
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << queue[front++] << " removed from queue\n";
}

// 🔹 Peek Operation
void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Front element is: " << queue[front] << endl;
}

// 🔹 Display Queue
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
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