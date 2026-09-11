#include<iostream>
using namespace std;

class Array{
    int n;
    public:
    int *p;
    void getdata(){
        cout<<"Enter number of Elements: ";
        cin>>n;
        p = new int[n];
        cout<<"Enter Elements: ";
        for(int i = 0;i<n;i++){
            cin>>p[i];
        }
    }
    void showdata(){
        cout<<"Array stored is: ";
        for(int i = 0;i<n;i++){
            cout<<p[i]<<" ";
        }
    }

};

int main(){
    Array ob;
    ob.getdata();
    ob.showdata();
}