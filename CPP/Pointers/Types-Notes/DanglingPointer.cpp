#include<iostream>
using namespace std;

int main(){
    int *ptr=new int(10); // dynamically allocated memory
    cout<<"Value of ptr is: "<<*ptr<<endl;
    delete ptr; // deallocating memory
    ptr=nullptr; // setting pointer to null after deletion
    cout<<"Value of ptr after deletion is: "<<ptr<<endl;
    return 0;
}

/*
notes:
A dangling pointer is a pointer that continues to reference a memory location after the memory has been deallocated.
 In this example, we dynamically allocate memory for an integer and assign its address to the pointer 'ptr'. 
 After using the pointer, we deallocate the memory using 'delete' and then set the pointer to 'nullptr' to avoid it becoming a dangling pointer.
 It is important to set pointers to null after deletion to prevent accidental access to freed memory, which can lead to undefined behavior or program crashes.
*/