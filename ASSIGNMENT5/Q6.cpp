#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    // Parameterized Constructor
    BankAccount(string accountNumber, string accountHolder, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    // Display Method
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    // Deposit Method
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw Method
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount account("123456789", "Simmi", 10000);

    account.display();

    cout << "\nAfter Deposit:" << endl;
    account.deposit(2000);
    account.display();

    cout << "\nAfter Withdrawal:" << endl;
    account.withdraw(3000);
    account.display();

    return 0;
}