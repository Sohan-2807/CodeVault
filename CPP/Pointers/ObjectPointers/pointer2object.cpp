#include<iostream>
using namespace std;
class Employee{
    int eid;
    int esal;
    public:
    void getdata(int eid,int esal){
    this->eid = eid;
    this->esal = esal;
    }
    void showdata(){
        cout<<eid<<" "<<esal;
    }
};

int main(){
    Employee e;
    Employee *ptr = &e;
    ptr->getdata(01,50000);
    ptr->showdata();
}