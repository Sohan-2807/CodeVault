#include<iostream>
using namespace std;
void swapNumbers(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
int main(){
    int a;
    int b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    swapNumbers(a,b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
/*
note1: In the above code, we are passing the values of a and b to the function swapNumbers. The function swaps the values of a and b, but since we are passing the values by value, the original values of a and b in main() remain unchanged.
note2: If we want to swap the values of a and b in main(), we need to pass the values by reference. We can do this by using pointers or references.
note3: The output of the above code will be:
*/