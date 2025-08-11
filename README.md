# Simple-ATM-Interface
The Simple ATM Interface is a beginner-friendly C++ project that simulates basic ATM operations in a console-based environment. This program is designed to demonstrate fundamental programming concepts such as loops, conditional statements, input validation, and formatted output.

---

# 💳 ATM Interface – C++ Project 

A console-based **ATM Interface** built in C++.  
It simulates basic banking operations such as checking balance, depositing funds, and withdrawing money.  
Includes **PIN authentication** for secure access with a limit of **three wrong attempts**.

---

## 📋 Features
- 🔐 **PIN Login** with limited attempts
- 💰 **Check Balance** with currency formatting
- ➕ **Deposit Money** with validation for positive amounts
- ➖ **Withdraw Money** with overdraft protection
- 🔄 **Looped menu** until the user exits

---

## 🛠 How to Use

1. **Run** the program in your console.
2. **Enter the 4-digit PIN** to access the ATM. *(Default: `1234`)*
3. Select from the menu:
   - `1` – Check Balance
   - `2` – Deposit Money
   - `3` – Withdraw Money
   - `4` – Exit
4. Program ends after:
   - Selecting **Exit**
   - OR **3 incorrect PIN attempts**

---

## 🧩 Code Structure

### Functions
| Function | Description |
|----------|-------------|
| `main()` | Handles PIN verification, menu navigation, and banking operations |

### Variables
| Variable | Purpose |
|----------|---------|
| `double balance` | Stores current account balance |
| `const int PIN` | Stores the correct ATM PIN |
| `int attempts` | Tracks incorrect PIN entries |
| `int choice` | Stores menu selection |
| `double amount` | Stores entered deposit/withdrawal amount |

---

## 🎯 Customization
- **Change PIN** – Modify `const int PIN` in the code.
- **Set Initial Balance** – Adjust `double balance` in the code.
- **Enhance Security** – Mask PIN entry or encrypt stored PIN.
- **Add Features** – Transaction history, multiple accounts, or file storage.

---

## 💻 Compilation & Execution

**Linux/macOS**
```bash
g++ atm.cpp -o atm
./atm
```

**Windows**
```bash
g++ atm.cpp -o atm.exe
atm.exe
```
