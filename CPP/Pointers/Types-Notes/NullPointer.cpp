#include<iostream>
using namespace std;
int main(){
    int *ptr=nullptr; // or we can use NULL insted of nullptr;
    cout<<"Value of ptr is: "<<ptr<<endl;
    return 0;
}

/*
notes:Null pointer is a pointer that does not point to any valid memory location. 
In C++, we can initialize a pointer to null using the nullptr keyword (introduced in C++11) or the NULL macro (from C). 
In this example, we initialize an integer pointer 'ptr' to nullptr, indicating that it does not point to any valid memory address. 
When we print the value of 'ptr', it will display '0' or 'nullptr', indicating that it is a null pointer. 
It is important to check for null pointers before dereferencing them to avoid undefined behavior or segmentation faults in your program.
*/
