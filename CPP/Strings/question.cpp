// write a program to validate a given phone number based on condition ;
// there are 10 digits, all the digits lie between 0 to 9 no other characters are allowed;

#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number.size()>10||number.size()<10){
        cout<<"Digits are not 10";
        return 0;
    }
    else{
        for (char ch : number) {
        if (!isdigit(ch)) {
            cout << "Enter numbers only";
            return 0;
        }
    }
    }
    cout<<"Number is correct";
    return 0;

}