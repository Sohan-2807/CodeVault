#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    cout<<"\nBefore Sorting: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;

        }
    }
    cout<<"\nAfter Sorting: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {7,5,9,3,1};
    int n = 5;
    selectionSort(arr,n);
}

/*
note1: The code implements the selection sort algorithm in C++. It takes an array of integers as input, sorts it in ascending order using the selection sort technique, and then displays the sorted array.
note2: The selection sort algorithm works by repeatedly finding the minimum element from the unsorted part of the array and moving it to the sorted part. It has a time complexity of O(n^2) in the worst case, making it inefficient for large datasets.
note3: The code uses a simple function to display the sorted array after sorting. It also prompts the user for input and handles the input/output operations using standard C++ streams.
note4: The code uses a fixed-size array of 5 elements. It is recommended to use dynamic memory allocation (e.g., using `new` or `std::vector`) for better flexibility and safety in C++.    
*/