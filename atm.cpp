#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    double balance = 1000.00; // Initial balance
    int choice;
    double amount;

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
                cout << "Your current balance: $" << balance << "\n";
                break;

            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: $" << balance << "\n";
                } else {
                    cout << "Invalid amount. Deposit failed.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: $" << balance << "\n";
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