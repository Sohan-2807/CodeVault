#include<iostream>
using namespace std;
class Sample{
    public:
    int x;
    int *p;
    void getdata(){
        cin>>x;
    }
    void showdata(){
        cout<<x<<endl;
    }
};


int main(){
    Sample ob;
    ob.getdata();
    ob.showdata();
    int Sample::*p = &Sample::x;
    cout<<ob.*p<<endl;

}
/*
note: In the above code, we have created a pointer to data member of class Sample.
  The pointer p is declared as int Sample::*p which means p is a pointer to an integer data member of class Sample.
  We have assigned the address of data member x to the pointer p using &Sample::x.
  We can access the value of x using the pointer p and the object ob using the syntax ob.*p.
*/