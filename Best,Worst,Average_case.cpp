#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "----- MENU -----" << endl;
    cout << "1. Sum Program (O(1))" << endl;
    cout << "2. Average Case Loop (O(n))" << endl;
    cout << "3. Best Case Nested Loop (O(n^2))" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        // O(1) - Constant Time
        case 1: {
            int a = 10, b = 5;
            int sum = a + b;
            cout << "Sum = " << sum << endl;
            break;
        }

        // O(n) - Linear Time
        case 2: {
            int n;
            cout << "Enter any number: ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << endl;
            break;
        }

        // O(n^2) - Quadratic Time
        case 3: {
            int n;
            cout << "Enter any number: ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    cout << i << j << " ";
                }
                cout << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
