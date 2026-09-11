#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
    static int count;
    void getdata(){
        cout<<"\nEnter code & price:";
        cin>>code>>price;
    }
    void showdata(){
        cout<<"\ncode: "<<code<<"\nPrice: "<<price;
        count++;
    }
    void showcount(){
        cout<<"\nCount is: "<<count;
    }

};
int item::count=0;     //even it takes 0 normally if not declared;
int main(){
    item ob;
    ob.getdata();
    ob.showdata();
    ob.showcount();
    item ob2;
    ob2.getdata();
    ob2.showdata();
    ob2.showcount();

    cout<<"\nCount is:"<<item::count<<endl;
    cout<<ob.count<<endl;
}

/*
note1: static data members are shared by all objects of the class.
 They are initialized outside the class definition.
note2: static data members are used to keep track of the number of objects created for a class.
note3: when not declared, static data members are initialized to 0 by default.
note4: static data members can be accessed using the class name and scope resolution operator.
note5: static data members can also be accessed using the object of the class as;
it is shared by all objects of the class it shows the last value of the static data member.
*/