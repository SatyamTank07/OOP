#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    char accountType;
    double balance;

public:
    BankAccount(){}
    // Constructor to initialize the account
    BankAccount(const string& name, int accNumber, char type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw an amount if sufficient balance is available
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount accounts[10];

    // Initialize 10 bank accounts
    for (int i = 0; i < 10; i++) {
        string name;
        int accNumber;
        char type;
        double initialBalance;

        cout << "Enter customer information for account " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Account Number: ";
        cin >> accNumber;
        cout << "Account Type (S for savings, C for current): ";
        cin >> type;
        cout << "Initial Balance: $";
        cin >> initialBalance;

        accounts[i] = BankAccount(name, accNumber, type, initialBalance);
    }

    // Perform some transactions for each account
    for (int i = 0; i < 10; i++) {
        cout << "\nAccount " << i + 1 << " Details:" << endl;
        accounts[i].display();

        accounts[i].deposit(1000);
        accounts[i].withdraw(500);
        accounts[i].deposit(200);
        accounts[i].withdraw(300);

        cout << "\nUpdated Account " << i + 1 << " Details:" << endl;
        accounts[i].display();
        cout << "-----------------------------------------" << endl;
    }

    return 0;
}
