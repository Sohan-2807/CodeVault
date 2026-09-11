#include<iostream>
using namespace std;
void swapNumbers(int &a,int &b){
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
note1: In the above code, we are passing the values of a and b to the function swapNumbers by reference. 
The function swaps the values of a and b, and since we are passing the values by reference, the original values of a and b in main() are also changed.
*/