#include<iostream>
using namespace std;

class student{
    int roll;
    int marks1;
    int marks2;
    public:
    void getdata(){
        cout<<"Enter rollno: ";
        cin>>roll;
        cout<<"\n enter marks in 2 courses:";
        cin>>marks1>>marks2;
    }
    friend void showresult(student ob);
};
void showresult(student ob){
    int sum = ob.marks1+ob.marks2;
    cout<<"\nresult of "<<ob.roll<<" is: ";
    cout<<sum;
}
int main(){
    student ob;
    ob.getdata();
    showresult(ob);
}
/*
note1: friend function is not a member of class but it can access private and protected data of class.
note2:It is declared inside the class with the keyword friend. It is defined outside the class. 
note3:It can be called like a normal function. It can be declared in any section of the class. It cannot be called by using the object of the class.
note4:It can be invoked without the help of any object. It cannot access the members directly by their names, it needs object name and dot operator to access any member.
note5: It can be declared in more than one class. It can be declared as a friend of another class. It can be declared as a friend of another function.

*/