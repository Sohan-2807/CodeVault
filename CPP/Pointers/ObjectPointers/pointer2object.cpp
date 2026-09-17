#include<iostream>
using namespace std;
class Employee{
    int id;
    int sal;
    public:
    void getdata(int eid,int esal){
    this->id = eid;
    this->sal = esal;
    }
    void showdata(){
        cout<<id<<" "<<sal;
    }
};

int main(){
    Employee e;
    Employee *ptr = &e;
    ptr->getdata(01,50000);
    ptr->showdata();
}