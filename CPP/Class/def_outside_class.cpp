#include<iostream>
using namespace std;
class Employee{
    public:
    int eid;
    float esal;
    void getdata();
    void display();
};
void Employee::getdata()
    {
        cout<<"enter eid and esal:";
        cin>>eid>>esal;
    }
void Employee::display()
    {
        cout<<"Employee details are:\n";
        cout<<"eid:"<<eid<<"\n";
        cout<<"esal:"<<esal<<"\n";
    }
int main(){
    Employee e1,e2;
    e1.getdata();
    e1.display();
    e2.getdata();
    e2.display();
}