#include<iostream>
using namespace std;

class Number{
    int n;
    public:
    void getdata(){
        cout<<"Enter number to be reversed: ";
        cin>>n;
    }
    friend class Reverse;
};
class Reverse{
    public:
    int rev = 0;
    void getRev(Number ob){
        while(ob.n>0){
            rev = rev * 10 + ob.n % 10;
            ob.n = ob.n / 10;
        }
        cout<<"\nReversed number is: ";
        cout<<rev;
    }
    
};
int main(){
    Number ob;
    ob.getdata();
    Reverse ob2;
    ob2.getRev(ob);
}