#include <iostream> 
using namespace std; 
 
// Bubble Sort 
void bubbleSort(int arr[], int n) { 
    for(int i = 0; i < n - 1; i++) { 
        for(int j = 0; j < n - i - 1; j++) { 
            if(arr[j] > arr[j + 1]) { 
                // Swap 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
} 
 
// Insertion Sort 
void insertionSort(int arr[], int n) { 
    for(int i = 1; i < n; i++) { 
        int key = arr[i]; 
        int j = i - 1; 
 
        while(j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
        arr[j + 1] = key; 
    } 
} 
 
// Display function 
void display(int arr[], int n) { 
    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
} 
cout << endl; 
} 
int main() { 
int arr[] = {64, 25, 12, 22, 11}; 
int n = 5; 
cout << "Original Array: "; 
display(arr, n); 
bubbleSort(arr, n); 
cout << "After Bubble Sort: "; 
display(arr, n); 
// Reset array 
int arr2[] = {64, 25, 12, 22, 11}; 
insertionSort(arr2, n); 
cout << "After Insertion Sort: "; 
display(arr2, n); 
return 0; 
} 