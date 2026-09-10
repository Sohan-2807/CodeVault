// write a program to find difference between minimum and maximum element of an array using pointer with array;

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array: "; 
    cin>>n;
    int a[n];
    cout<<"\n Enter values of Array :";
    for(int i = 0;i<n;i++){
        cin>>*(a+i);
    }
    int min = a[0],max = a[0];
    for(int i = 1;i<n;i++){
        if(*(a+i)>max){
            max = *(a+i);
        }
        if(*(a+i)<min){
            min = *(a+i);
        }
    }
    cout<<"\nDifference is:"<<max - min<<endl;
    return 0;
}