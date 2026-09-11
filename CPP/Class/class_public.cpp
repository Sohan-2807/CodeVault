#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        float esal;
        void getdata()
        {
            cout<<"enter eid and esal:";
            cin>>id>>esal;
        }
        void display()
        {
            cout<<"Employee details are:\n";
            cout<<"eid:"<<id<<"\n";
            cout<<"esal:"<<esal<<"\n";
        }
};
int main(){
    Employee e1,e2;
    e1.getdata();
    e1.display();   
    cout<<"\n";
    cout<<"Enter details of second employee:\n";
    cout<<"enter eid and esal:";
    cin>>e2.id>>e2.esal;
    e2.display();

}

/*
note: class is a user defined data type which contains data members and member functions.
note2: object is an instance of a class.
note3: data members are variables which are used to store data.
note4: member functions are functions which are used to perform operations on data members.
note5: access specifiers are used to specify the access level of data members and member functions.
note6: public access specifier allows access to data members and member functions from outside the class.
note7: private access specifier allows access to data members and member functions only from within the class.
note8: protected access specifier allows access to data members and member functions from within the class
note9: by default, all members of a class are private.
note10: class is a blueprint for creating objects.

*/
