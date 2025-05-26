#include<iostream>
#include<string>

using namespace std;

class Customer {
private:
    string name;
    int balance, account_number;
public:
    Customer(string name, int balance, int acc) {
        this->name = name;
        this->account_number = acc;
        this->balance = balance;
    }

    // Deposit
    void deposit(int amount) {
        if (amount > 5000) {
            throw "You must deposit an amount less than or equal to 5000 as per terms and conditions.";
        }
        else if (amount > 0) {
            balance += amount;
            cout << amount << " rupees have been successfully credited." << endl;
        }
        else {
            throw "You must deposit a positive amount greater than zero.";
        }
    }

    // Withdraw
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " rupees have been successfully debited." << endl;
        }
        else if (amount > balance) {
            throw "You do not have sufficient balance to withdraw.";
        }
        else {
            throw "You must enter a positive amount greater than zero.";
        }
    }
};

int main() {
    // If any error is detected in the try block, the program will catch and handle the exception.
    try {
        Customer cust("Rahul", 5000, 12);
        cust.deposit(3000);
        cust.withdraw(0);
        cust.deposit(200);
    }
    catch (const char* err) {
        cout << "Your exception: " << err << endl;
    }

    return 0;
}
