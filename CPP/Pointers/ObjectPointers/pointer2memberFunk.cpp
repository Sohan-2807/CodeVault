#include<iostream>
using namespace std;

class Sample {
public:
    int a;

    void getdata() {
        cin >> a;
    }

    void showdata() {
        cout << a;
    }
};

int main() {
    Sample ob;

    void (Sample::*ptr)() = &Sample::getdata;

    (ob.*ptr)();

    return 0;
}