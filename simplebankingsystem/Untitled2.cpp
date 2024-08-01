#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main() {
    BankAccount b("", 0, 0.0); // Initialize the declaration
    int choice;
    string name;
    int number;
    double balance;
    double amount;

    do {
        cout << "Simple Banking System" << endl; // Menu
        cout << "1. Create new account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display Account Info" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your relevant choice: ";
        while (!(cin >> choice) || choice < 1 || choice > 6) {
            cout << "Invalid choice! Please re-enter: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (choice == 1) {
            cout << "Enter Account Holder Name: ";
            cin.ignore(); // Clear the newline character from the buffer
            getline(cin, name);

            while (true) {
                cout << "Enter Account Number: ";
                if (cin >> number && number > 0) {
                    break;
                } else {
                    cout << "Invalid input! Please re-enter: ";
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }

            while (true) {
                cout << "Enter initial balance: ";
                if (cin >> balance && balance >= 0) {
                    break;
                } else {
                    cout << "Invalid input! Please re-enter: ";
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }

            b = BankAccount(name, number, balance); // Creates a new BankAccount object with the provided name, number, and balance, and assigns it to b.
        }

        if (choice == 2) {
            cout << "Enter Account Number: ";
            while (!(cin >> number) || number <= 0) {
                cout << "Invalid input! Please re-enter: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            if (b.getaccountnumber() == number) { // Checks if the account exists or not
                while (true) {
                    cout << "Enter Amount: ";
                    if (cin >> amount && amount > 0) {
                        b.deposit(amount);
                        break;
                    } else {
                        cout << "Invalid input! Please re-enter: ";
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                }
            } else {
                cout << "Error! Account not present" << endl;
            }
        }

        if (choice == 3) {
            cout << "Enter Account Number: ";
            while (!(cin >> number) || number <= 0) {
                cout << "Invalid input! Please re-enter: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            if (b.getaccountnumber() == number) { // Checks if the account exists or not
                while (true) {
                    cout << "Enter Amount: ";
                    if (cin >> amount && amount > 0) {
                        b.withdraw(amount);
                        break;
                    } else {
                        cout << "Invalid input! Please re-enter: ";
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                }
            } else {
                cout << "Error! Account not present" << endl;
            }
        }

        if (choice == 4) {
            cout << "Enter Account Number: ";
            while (!(cin >> number) || number <= 0) {
                cout << "Invalid input! Please re-enter: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            if (b.getaccountnumber() == number) {
                cout << "Balance = " << b.getaccountbalance() << endl;
            } else {
                cout << "Error! Account not present" << endl;
            }
        }

        if (choice == 5) {
            cout << "Enter Account Number: ";
            while (!(cin >> number) || number <= 0) {
                cout << "Invalid input! Please re-enter: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            if (b.getaccountnumber() == number) {
                b.display();
            } else {
                cout << "Error! Account not present" << endl;
            }
        }
    } while (choice != 6);

    return 0;
}

