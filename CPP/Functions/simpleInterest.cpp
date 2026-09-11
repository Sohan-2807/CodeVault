#include<iostream>
using namespace std;

int SimpleInterest(int principal,int time ,int rate = 10){
    cout<<"Simple Interest is:"<<endl;
    int si = principal*time*rate/100;
    return si;
}

int main(){
    cout<<SimpleInterest(10000,2);
}

/*
Default arguments are used to provide default values for function parameters.
In the above code, we have defined a function SimpleInterest that takes three parameters: principal,
time, and rate. The rate parameter has a default value of 10, which means that if we do not provide a value for rate when calling the function, it will use the default value of 10.
In the main function, we are calling the SimpleInterest function with only two arguments: 10000 and 2. Since we have not provided a value for the rate parameter, it will use the default value of 10.
*/
