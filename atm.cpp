#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    double balance = 1000.00; // Initial balance
    int choice;
    double amount;
    const int PIN = 1234; // ATM PIN
    int enteredPIN;
    int attempts = 0;

    // PIN Authentication
    cout << "======= Upendra's Bank =======\n";
    cout << "===== Welcome to the ATM =====\n";
    while (attempts < 3) {
        cout << "Enter your 4-digit PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == PIN) {
            cout << "PIN verified successfully.\n";
            break;
        } else {
            attempts++;
            cout << "Incorrect PIN. Attempts left: " << (3 - attempts) << "\n";
        }
    }

    if (attempts == 3) {
        cout << "Too many incorrect attempts. Card blocked.\n";
        return 0; // Exit program
    }

    // ATM Operations
    do {
        cout << "\n===== Simple ATM Interface =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << fixed << setprecision(2);
                cout << "Your current balance: Rs." << balance << "\n";
                break;

            case 2:
                cout << "Enter amount to deposit: Rs.";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: Rs." << balance << "\n";
                } else {
                    cout << "Invalid amount. Deposit failed.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs.";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! Remaining balance: Rs." << balance << "\n";
                } else if (amount > balance) {
                    cout << "Insufficient funds.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}