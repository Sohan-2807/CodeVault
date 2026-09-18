#include <iostream>
using namespace std;

class Area {
    int l, b;
public:
    // Default constructor
    Area() {
        l = 5;
        b = 3;
    }
    void getdata() {
        cout << "Enter L & B: ";
        cin >> l >> b;
    }
    void showdata() {
        cout << "Area: " << l * b << endl;
    }
};

int main() {
    Area ob;
    // ob.getdata();  // Uncomment to take user input, otherwise uses constructor defaults
    ob.showdata();
    return 0;
}
