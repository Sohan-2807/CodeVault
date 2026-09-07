#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void display(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"\n Array after Sorting: ";
    bubbleSort(arr,n);
    display(arr,n);
    return 0;
}