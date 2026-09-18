#include <iostream>
using namespace std;

class Area {
    int l, b;
public:
    // Parameterized constructor
    Area(int a, int br) {
        l = a;
        b = br;
    }
    
    void showdata() {
        cout << "Area: " << l * b << endl;
    }
};

int main() {
    // 1. Pass values directly to the parameterized constructor
    Area ob(10, 5);
    ob.showdata();

    // 2. Or take user input first, then pass to constructor
    int x, y;
    cout << "Enter values of l & b: ";
    cin >> x >> y;

    Area ob2(x, y);
    ob2.showdata();

    return 0;
}
