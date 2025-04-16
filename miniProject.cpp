#include <iostream>
using namespace std;

class Account {
protected:
    float balance;

public:
    Account(float b) {
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    float getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
private:
    float interestRate;

public:
    SavingsAccount(float b, float rate) : Account(b) {
        interestRate = rate;
    }

    void addInterest() {
        float interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Added: " << interest << ", New Balance: " << balance << endl;
    }
};

class CheckingAccount : public Account {
private:
    float overdraftLimit;

public:
    CheckingAccount(float b, float limit) : Account(b) {
        overdraftLimit = limit;
    }

    void withdraw(float amount) {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Withdrawal exceeds overdraft limit" << endl;
        }
    }
};

int main() {
    SavingsAccount sa(5000, 5);
    sa.deposit(1000);
    sa.addInterest();
    sa.withdraw(2000);

    CheckingAccount ca(2000, 1000);
    ca.withdraw(2500);
    ca.withdraw(1000);

    return 0;
}
