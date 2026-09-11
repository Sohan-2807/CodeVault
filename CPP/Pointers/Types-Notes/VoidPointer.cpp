#include<iostream>
using namespace std;
int main(){
    int a=10;
    char c='A';
    void *ptr=&a;
    cout<<"Value of a is: "<<*(int*)ptr<<endl;
    ptr=&c;
    cout<<"Value of c is: "<<*(char*)ptr<<endl;
    return 0;
}

/*
notes:
void pointer is a special type of pointer that can point to any data type.
 It is also known as a generic pointer. However, before dereferencing a void pointer, it must be cast to another pointer type. 
 In this example, we first assign the address of an integer variable 'a' to the void pointer 'ptr', and then we cast it to an int pointer to access the value. 
 Later, we assign the address of a char variable 'c' to the same void pointer and cast it to a char pointer to access its value.
*/