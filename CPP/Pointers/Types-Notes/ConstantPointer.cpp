#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b = 20;
    int* const ptr = &a;
    cout<<"Value of ptr is: "<<*ptr<<endl;
    *ptr = 30; // modifying the value of 'a' through the constant pointer
    // ptr = &b;  This line will cause a compilation error because 'ptr' is a constant pointer and cannot be reassigned to point to another variable
    cout<<"Value of a after modification is: "<<a<<endl;
    return 0;
}

/*
notes:
A constant pointer is a pointer whose address cannot be changed after initialization, 
meaning it will always point to the same memory location. However, the value at that memory location can be modified. 
In this example, we declare a constant pointer 'ptr' that points to the integer variable 'a'. 
We can modify the value of 'a' through the pointer, but we cannot change the address stored in 'ptr' to point to another variable (like 'b'). 
Attempting to do so will result in a compilation error.
*/