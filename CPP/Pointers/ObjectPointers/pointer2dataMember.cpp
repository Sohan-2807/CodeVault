#include<iostream>
using namespace std;
class Sample{
    public:
    int x;
    int *p;
    void getdata(){
        cin>>x;
    }
    void showdata(){
        cout<<x;
    }
};


int main(){
    Sample ob;
    ob.getdata();
    ob.showdata();
    int Sample::*p = &Sample::x;
    cout<<ob.*p;

}