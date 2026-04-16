#include <iostream>
using namespace std;

// 🔹 Recursive Linear Search
int recursiveLinearSearch(int arr[], int n, int key, int index) {
    if (index >= n)
        return -1;

    if (arr[index] == key)
        return index;

    return recursiveLinearSearch(arr, n, key, index + 1);
}

// 🔹 Recursive Binary Search
int recursiveBinarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return recursiveBinarySearch(arr, low, mid - 1, key);

    return recursiveBinarySearch(arr, mid + 1, high, key);
}

int main() {
    int n, key, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    cout << "\nChoose Method:\n";
    cout << "1. Recursive Linear Search\n";
    cout << "2. Recursive Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    int result;

    if (choice == 1) {
        result = recursiveLinearSearch(arr, n, key, 0);
    }
    else if (choice == 2) {
        result = recursiveBinarySearch(arr, 0, n - 1, key);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}