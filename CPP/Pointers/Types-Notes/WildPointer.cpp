#include<iostream>
using namespace std;
int main(){
    int *p; //it is not declared while initializing it, so it is a wild pointer
    cout<<"Value of p is: "<<p<<endl;
}

/*
notes:
A wild pointer is a pointer that has not been initialized to a valid memory address.
*/