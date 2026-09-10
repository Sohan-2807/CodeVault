#include<iostream>
using namespace std;

int main(){
    int a[] = {0,1,2,3,4,5};
    int *p = a;   // points to the first element of the array
    cout << p << " " << *p;
    p++;
    cout << "\n" << p << " " << *p;
    int *q = p++;
    cout<<"\n"<<p-q;
    cout<<"\n"<<q<<" "<<p;
    cout<<"\n"<<*p - *q;
}

/*
in present code, we have declared an array of integers and initialized a pointer to point to the first element of the array.
 We then increment the pointer to point to the next element and demonstrate pointer arithmetic by calculating the difference between two pointers. 
 The output shows the memory addresses and values pointed to by the pointers, 
 as well as the difference in values between the elements they point to.
 Arithmetic operations on pointers allow us to navigate through the array and access its elements efficiently.
 For example, incrementing a pointer moves it to the next element in the array, while subtracting two pointers gives the number of elements between them.

*/