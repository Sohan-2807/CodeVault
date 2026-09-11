#include<iostream>
using namespace std;

class A{
    int a;
    int *p;
    public:
    void setdata(){
        a = 90;
        p = &a;
        cout<<*p;
    }
};

int main(){
    A ob;
    ob.setdata();
}
