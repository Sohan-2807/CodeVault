#include<iostream>
using namespace std;

void area(int a,int b){
    cout<<"Area is: "<<a*b<<endl;
}
void area(float a,double b){
    cout<<"Area is: "<<a*b<<endl;
}

int main(){
    area(2,3);
    area(2.5f,3.5);
}


/*
note1: In the above code, we have defined two functions with the same name area but with different parameter types.
    The first function takes two integer parameters and calculates the area of a rectangle with integer dimensions.
    The second function takes two double parameters and calculates the area of a rectangle with double dimensions.
note2: This is an example of function overloading in C++. Function overloading allows us
    to define multiple functions with the same name but different parameter types or numbers of parameters. 
    The compiler determines which function to call based on the arguments passed to the function.
note3: Function overloading is a powerful feature of C++ that allows us to write more readable and maintainable code. 
    It allows us to use the same function name for different operations, making our code more intuitive and easier to understand.
note4: Function overloading can also be used with default arguments, allowing us to define a single function that can handle multiple cases. 
    This can further simplify our code and reduce the number of functions we need to define.
error1: if we change the return type of the function, it will give an error because the compiler cannot differentiate between the two functions based on return type alone. 
    The parameter types or numbers of parameters must be different for function overloading to work.
error2: If we define two functions with the same name and the same parameter types, it will give an error because the compiler cannot differentiate between the two functions. 
    The parameter types or numbers of parameters must be different for function overloading to work.
error3:if we use float instead of double, it will give an error because the compiler cannot differentiate between the two functions based on parameter types alone. 
    The parameter types or numbers of parameters must be different for function overloading to work.
    for float we should use f or example area(2.5f,3.5f) instead of area(2.5,3.5) to differentiate between the two functions.

*/