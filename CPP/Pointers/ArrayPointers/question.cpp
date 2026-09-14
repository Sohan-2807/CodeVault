// write a program to create a class Car with data members carid, caprice, year of manufacturing ; 
// create an array of objects of car to read and display the details of n cars;

#include<iostream>
using namespace std;

class car{
    int id;
    int price;
    int year;
    public:
    void getdata(){
        cout<<"Enter car details";
        cin>>id>>price>>year;
    }
    void showdata(){
        cout<<"\nCar id:"<<id<<"\nCar price:"<<price<<"\nYear of manufacturing:"<<year;
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
    for(int i =0;i<n;i++){
        arr[i].showdata();
    }
}

/*
notes:
This program creates a class 'car' with data members 'id', 'price', and 'year'. It then creates an array of objects of the 'car' class to read and display the details of 'n' cars.
working of the program:
1. The program prompts the user to enter the number of cars they want to input.
2. It then creates an array of 'car' objects of size 'n'.
3. The program uses a loop to call the 'getdata' member function for each car object in the array, allowing the user to input the details for each car.
*/
