#include<iostream>
using namespace std;
class operations{
    int a;
    int b;
    public:
    void getdata(){
        cout<<"Enter values of a & b:";
        cin>>a>>b;
    }
    inline int maxx();
};
int operations::maxx(){
    return(a>b)?a:b;
}
int main(){
    operations ob;
    ob.getdata();
    cout<<"largest num is:";
    cout<<ob.maxx();
}


/* 
note: inline function is used to reduce the function call overhead.
 It is a request to the compiler to replace the function call with the actual code of the function
 However, it is up to the compiler to decide whether to inline the function or not.
note2: inline function is defined inside the class definition, so it is automatically considered as inline function.    
note3: inline function is defined outside the class definition, so it is explicitly declared as inline function.
*/
