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
    ob.getdata();
    int Sample::*p = &Sample::a;
    cout << ob.*p;
    return 0;
}