#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b = 20;
    const int* ptr = &a; // pointer to a constant integer
    cout<<"Value of ptr is: "<<*ptr<<endl;
    // *ptr = 30;  This line will cause a compilation error because 'ptr' points to a constant integer
    ptr = &b; // we can change the address stored in 'ptr' to point to another variable
    cout<<"Value of ptr is: "<<*ptr<<endl;
    return 0;
}

/*
notes:
A pointer to a constant integer is a pointer that points to an integer whose value cannot be modified through the pointer. 
In this example, we declare a pointer 'ptr' that points to the constant integer variable 'a'. 
We can read the value of 'a' through the pointer, but we cannot modify it. 
Attempting to do so will result in a compilation error.
*/