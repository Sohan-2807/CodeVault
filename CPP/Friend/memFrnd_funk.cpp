//member function of one class acting as friend function to another class;
#include<iostream>
using namespace std;
class B;
class A{
    public:
    void access(B ob);
};
class B{
    int b;
    public:
    void input(){
        cout<<"\n Enter b:";
        cin>>b;
    }
    friend void A::access(B ob);
};
void A::access(B ob){
    cout<<"Value of b is:"<<ob.b;
};
int main(){
    A ob2;
    B ob;
    ob.input();
    ob2.access(ob);
}

