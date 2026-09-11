// write a program to create a class Car with data members carid, caprice, year of manufacturing ; 
// create an array of objects of car to read and display the details of n cars;

#include<iostream>
using namespace std;

class car{
    int carid;
    int carprice;
    int year;
    public:
    void getdata(){
        cout<<"Enter car details";
        cin>>carid>>carprice>>year;
    }
};

int main(){
    int n;
    cout<<"Enter number of cars";
    cin>>n;
    car arr[n];
    for(int i =0;i<n;i++){
        arr[i].getdata();
    }
}