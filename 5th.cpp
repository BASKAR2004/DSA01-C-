#include <iostream>
#include <string>
using namespace std;
class BankAccount {
public:
    BankAccount(string accountHolder, double initialBalance) 
        : accountHolder(accountHolder), balance(initialBalance) {
        cout << "Account created for " << accountHolder << endl;
    }
    BankAccount() {
        cout << "Account closed for " << accountHolder << endl;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << "New balance: " << balance << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " New balance: " << balance << endl;
        } else {
            cout << " withdraw " << amount << endl;
        }
    }
    void displayInfo() {
        cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
    }
private:
    string accountHolder;
    double balance;
};
int main() {
    BankAccount account1("John Doe", 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.displayInfo();
    return 0;
}
