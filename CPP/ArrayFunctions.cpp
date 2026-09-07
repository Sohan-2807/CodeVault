#include <iostream>
using namespace std;

class Array {
    int a[100];
    int n;

public:
    void getData() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    void showData() {
        cout << "\nThe array is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }

    void findMax() {
        int max = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        cout << "\nMaximum element in array is: " << max;
    }

    void deleteEle(int index) {
        if (index < 0 || index >= n) {
            cout << "\nInvalid index!";
            return;
        }

        for (int i = index; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        cout << "\nElement deleted successfully.";
    }

    void sortArray() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        cout << "\nArray after sorting is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
};

int main() {
    Array ob;

    ob.getData();
    ob.showData();
    ob.findMax();

    int e;
    cout << "\nEnter index to delete: ";
    cin >> e;

    ob.deleteEle(e);

    ob.showData();

    ob.sortArray();

    return 0;
}