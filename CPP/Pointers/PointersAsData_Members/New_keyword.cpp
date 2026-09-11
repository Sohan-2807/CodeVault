#include<iostream>
using namespace std;

class Array{
    int n;
    public:
    int *p;
    void getdata(){
        cout<<"Enter number of Elements: ";
        cin>>n;
        p = new int[n];
        cout<<"Enter Elements: ";
        for(int i = 0;i<n;i++){
            cin>>p[i];
        }
    }
    void showdata(){
        cout<<"Array stored is: ";
        for(int i = 0;i<n;i++){
            cout<<p[i]<<" ";
        }
    }

};

int main(){
    Array ob;
    ob.getdata();
    ob.showdata();
}

/*
notes:
In this example, we have a class 'Array' that has an integer data member 'n' to store the number of elements and a pointer data member 'p' to dynamically allocate memory for an array of integers.
The 'getdata' member function prompts the user to enter the number of elements and then allocates memory for the array using the 'new' keyword. It then takes input for each element of the array.
The 'showdata' member function displays the elements of the array stored in the dynamically allocated memory.
new keyword is used to allocate memory dynamically at runtime, and it returns a pointer to the allocated memory. In this case, 'p' is assigned the address of the dynamically allocated array.
*/