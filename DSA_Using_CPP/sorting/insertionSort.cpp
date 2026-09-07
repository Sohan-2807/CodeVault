#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    display(arr, n);

    return 0;
}

/*
note1: The code implements the insertion sort algorithm in C++. It takes an array of integers as input, sorts it in ascending order using the insertion sort technique, and then displays the sorted array.
note2: The insertion sort algorithm works by iterating through the array and inserting each element into its correct position in the already sorted part of the array. 
    It has a time complexity of O(n^2) in the worst case, but it is efficient for small datasets or nearly sorted arrays.    
note3: The code uses a simple function to display the sorted array after sorting. It also prompts the user for input and handles the input/output operations using standard C++ streams.
note4: The code uses variable-length arrays (VLAs) which are not part of the C++ standard. It is recommended to use dynamic memory allocation (e.g., using `new` or `std::vector`) for better compatibility and safety in C++.
*/