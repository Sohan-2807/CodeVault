#include<iostream>
using namespace std;

class Account{
    int accno;
    int balance;
    public:
    void getdata(){
        cout<<"enter Account number:";
        cin>>accno;
        cout<<"\n Enter balance:";
        cin>>balance;
    }
    friend class Audit;
};
class Audit{
    public:
    void getdetails(Account ob){
        if (ob.balance < 500) {
            cout<<"\nThe user with Account number "<<ob.accno<<" is having low balance";
        } else {
            cout<<"\nThe user with Account number "<<ob.accno<<" is not having low balance";
        }
    }
};
int main(){
    Account ob;
    ob.getdata();
    Audit ob2;
    ob2.getdetails(ob);
}
