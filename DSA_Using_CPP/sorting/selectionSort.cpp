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