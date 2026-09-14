// write a program to print reversed string with out using library function;

#include<iostream>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    int count = 0;
    while(name[count]!='\0'){
        count++;
    }
    for(int i = count-1;i>=0;i--){
        cout<<name[i]<<" ";
    }
    return 0;

}