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





















/*
operations in Array Pointers:
1. Declaration of an array pointer.
2. Initialization of an array pointer.
3. Accessing array elements using the array pointer.
4. Modifying array elements using the array pointer.
5. Iterating through the array using the array pointer.
6. Passing an array pointer to a function.
7. Returning an array pointer from a function.
8. Dynamic memory allocation for an array using pointers.
9. Deallocation of dynamically allocated array memory.
10. Using pointer arithmetic to navigate through the array.
11. Understanding the relationship between arrays and pointers in C++.
12. Implementing multi-dimensional arrays using pointers.
13.Additional operations and best practices for using array pointers in C++.eg, avoiding memory leaks, ensuring proper bounds checking, and using smart pointers for better memory management.
14. The code uses a simple function to display the sorted array after sorting. It also prompts the user for input and handles the input/output operations using standard C++ streams.
14.substaction: The code uses a simple function to display the sorted array after sorting. It also prompts the user for input and handles the input/output operations using standard C++ streams.
15. The code uses a fixed-size array of 5 elements. It is recommended to use dynamic memory allocation (e.g., using `new` or `std::vector`) for better flexibility and safety in C++.
*/