#include<iostream>
using namespace std;

inline int maxx(int a,int b){
    return (a>b)?a:b;
}
int main()
{
    
    cout<<"\nmaximum is:";
    cout<<maxx(5,9);
    cout<<"\nmaximum is:";
    cout<<maxx(99,100);

}

// note: inline function is used to reduce the function call overhead.
//  It is a request to the compiler to replace the function call with the actual code of the function
// However, it is up to the compiler to decide whether to inline the function or not.
