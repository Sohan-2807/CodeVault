#include<iostream>
using namespace std;
class Account{
    int acno;
    int bal;
    public:
        void getdata(){
            cout<<"\nEnter Account number and balance:"<<endl;
            cin>>acno>>bal;
        }
        void checkBal(){
            cout<<"\nBal is:"<<bal<<endl;
        }
        void deposit(int amnt){
            bal = bal+amnt;
            cout<<"\n balance after deposit: "<<bal;
            
        }
        void withdraw(int amnt){
            if (amnt > bal){
                cout<<"\nInsufficient funds";
            }
            else{
                bal = bal - amnt;
                cout<<"\n balance after withdraw: "<<bal;
            }
            
        }
};
int main(){
    Account a;
    a.getdata();
    a.checkBal();
    int amount;
    cout<<"\nEnter amount to be deposited: ";
    cin>>amount;
    a.deposit(amount);
    cout<<"\nEnter amount to be withdrawn: ";
    cin>>amount;
    a.withdraw(amount);

}
