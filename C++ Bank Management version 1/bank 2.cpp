#include <iostream>
#include <cstring>
#include <cstdlib>  // For exit()
using namespace std;

class Bank {
    // Variables
    char name[100], address[100], accOpt;
    int balance;

public:
    // Member functions
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

// Function to open a new account
void Bank::open_account() {
    cout << "Enter your full name: ";
    cin.ignore();  // Clears the input buffer before taking string input
    cin.getline(name, 100); // Takes full name as input
    cout << "Enter your Address: ";
    cin.getline(address, 100); // Takes address as input
    cout << "What type of Account would you like to open? (Savings account (s) / Current Account (c)): ";
    cin >> accOpt;  // Takes account type as input
    cout << "Enter Amount for Deposit: ";
    cin >> balance; // Takes balance as input
    cout << "Your Account is created successfully!\n";
    cout << " ^  ^\n";
    cout << " |__??_|\n";
}

// Function to deposit money
void Bank::deposit_money() {
    int deposit;
    cout << "Enter the amount to deposit: ";
    cin >> deposit;  // Takes deposit amount as input
    balance += deposit;  // Adds deposit amount to the balance
    cout << "Amount Deposited: " << deposit << "\n";
    cout << "Updated Balance: " << balance << "\n";
}

// Function to withdraw money
void Bank::withdraw_money() {
    int withdraw;
    cout << "Enter the amount to withdraw: ";
    cin >> withdraw;  // Takes withdrawal amount as input
    if (withdraw > balance) {
        cout << "Insufficient balance!\n";
    } else {
        balance -= withdraw;  // Deducts withdrawal amount from the balance
        cout << "Amount Withdrawn: " << withdraw << "\n";
        cout << "Updated Balance: " << balance << "\n";
    }
}

// Function to display account details
void Bank::display_account() {
    cout << "Account Holder: " << name << "\n";
    cout << "Account Address: " << address << "\n";
    cout << "Account Type: " << (accOpt == 's' || accOpt == 'S' ? "Savings" : "Current") << "\n";
    cout << "Account Balance: " << balance << "\n";
}

int main() {
    int choice;
    char x;
    Bank obj;

    do {
        cout << "1) Open Account\n";
        cout << "2) Deposit Money\n";
        cout << "3) Withdraw Money\n";
        cout << "4) Display Account\n";
        cout << "5) Exit\n";
        cout << "Select an option from the menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.open_account();
                break;
            case 2:
                obj.deposit_money();
                break;
            case 3:
                obj.withdraw_money();
                break;
            case 4:
                obj.display_account();
                break;
            case 5:
                cout << "Exiting the program...\n";
                exit(0);  // Proper exit
            default:
                cout << "Invalid option! Please try again.\n";
        }

        // Asking if the user wants to continue or exit
        cout << "\nDo you want to select another option? (Y/N): ";
        cin >> x;

    } while (x == 'Y' || x == 'y');  // Loop continues if user enters 'Y' or 'y'

    return 0;
}
