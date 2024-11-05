#include <iostream>
using namespace std;

class Account {
public:
    // Constructor that validates the initial balance
    explicit Account(int balance) {
        if (balance >= 0) {
            accountBalance = balance;
        } else {
            accountBalance = 0;
            cout << "Initial balance was invalid. Setting balance to 0." << endl;
        }
    }

    // Function to add an amount to the balance
    void credit(int amount) {
        accountBalance += amount;
    }

    // Function to withdraw an amount from the balance
    void debit(int amount) {
        if (amount > accountBalance) {
            cout << "Debit amount exceeded account balance." << endl;
        } else {
            accountBalance -= amount;
        }
    }

    // Function to return the current balance
    int getBalance() const {
        return accountBalance;
    }

private:
    int accountBalance;
};

int main() {
    // Create two Account objects with initial balances
    Account account1(50);
    Account account2(-10);  // This will trigger the invalid balance message

    // Test credit and debit operations
    cout << "account1 initial balance: " << account1.getBalance() << endl;
    cout << "account2 initial balance: " << account2.getBalance() << endl;

    account1.credit(30);
    cout << "account1 balance after credit: " << account1.getBalance() << endl;

    account1.debit(20);
    cout << "account1 balance after debit: " << account1.getBalance() << endl;

    account1.debit(100);  // This will trigger the debit exceeded message

    return 0;
}