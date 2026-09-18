// Write a program to create a class account having parameterized constructor to initialize the 
// members of class (acc no ,acc holder name, balance, year of opening acc) , 
// member functions (calculate interest, to check if acc older than 2000th year)

#include<iostream>
using namespace std;

class Account{
    int accno;
    string name;
    double balance;
    int year;
    public: 

    Account(int accno, string name, double balance, int year) {
        this->accno = accno;
        this->name = name;
        this->balance = balance;
        this->year = year;
    }

    void calculateInterest(double rate = 5.0) {
        double interest = (balance * rate) / 100.0;
        cout << "Interest calculated (" << rate << "%): " << interest << endl;
    }

    void checkOlderThan2000() {
        if (year < 2000) {
            cout << "Account is older than year 2000 (Opened in: " << year << ")." << endl;
        } else {
            cout << "Account is NOT older than year 2000 (Opened in: " << year << ")." << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account No: " << accno << endl;
        cout << "Holder Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Year of Opening: " << year << endl;
    }
};

int main() {
    Account acc1(101, "Alice", 50000.0, 1998);
    acc1.display();
    acc1.calculateInterest(5.0);
    acc1.checkOlderThan2000();

    Account acc2(102, "Bob", 75000.0, 2005);
    acc2.display();
    acc2.calculateInterest(6.5);
    acc2.checkOlderThan2000();

    return 0;
}