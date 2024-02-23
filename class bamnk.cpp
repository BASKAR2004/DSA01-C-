#include <iostream>
#include <string>
class BankAccount {
public:
    BankAccount(std::string accountHolder, double initialBalance) 
        : accountHolder(accountHolder), balance(initialBalance) {
        std::cout << "Account created for " << accountHolder << std::endl;
    }
    BankAccount() {
        std::cout << "Account closed for " << accountHolder << std::endl;
    }
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient funds to withdraw $" << amount << std::endl;
        }
    }
    void displayInfo() {
        std::cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << std::endl;
    }
private:
    std::string accountHolder;
    double balance;
};
int main() {
    BankAccount account1("John Doe", 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.displayInfo();
    return 0;
}

