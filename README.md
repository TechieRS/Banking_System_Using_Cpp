# Bank Account System in C++

This is a simple **Bank Account System** implemented in C++ to demonstrate **inheritance**, **polymorphism**, and **method overriding** in Object-Oriented Programming. It features two types of accounts: **SavingsAccount** and **CheckingAccount**.

## 💼 Features

- **Deposit** and **Withdraw** operations for all account types
- **SavingsAccount** earns interest at a fixed rate
- **CheckingAccount** allows withdrawals within an overdraft limit
- Demonstrates **method overriding** in `withdraw` method

## 🧠 Concepts Used

- Classes and Objects  
- Inheritance  
- Access Specifiers (`protected`, `private`, `public`)  
- Constructor Initialization  
- Polymorphism through method overriding  

## 🧾 Sample Output

```
Deposited: 1000, New Balance: 6000
Interest Added: 300, New Balance: 6300
Withdrawn: 2000, New Balance: 4300
Withdrawn: 2500, New Balance: -500
Withdrawal exceeds overdraft limit
```

## 🚀 Getting Started

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/bank-account-system-cpp.git
    ```
2. Navigate to the project directory:
    ```bash
    cd bank-account-system-cpp
    ```
3. Compile the program:
    ```bash
    g++ main.cpp -o bank_app
    ```
4. Run the program:
    ```bash
    ./bank_app
    ```

## 📁 File Structure

```
bank-account-system-cpp/
├── main.cpp         # Source code
└── README.md        # Documentation
```

## ✅ To-Do

- [ ] Add transaction history
- [ ] Include user input interface for dynamic interaction
- [ ] Implement account validation and error handling

## 👨‍💻 Author

  [GitHub](https://github.com/TechieRs)

---

> A great starting point for learning object-oriented design in C++. Feel free to expand and build upon this basic system!
