
#include <iostream>
#include "bankAccount.h"


int main() {
    int accountNumber;
    std::string accountName, accountType;
    double balance;

    std::cout << "\nEnter Details:\n";
    std::cout << "-----------------------\n";
    std::cout << "Account No: ";
    std::cin >> accountNumber;
    std::cout << "Name: ";
    std::cin >> accountName;
    std::cout << "Account Type: ";
    std::cin >> accountType;
    std::cout << "Balance: ";
    std::cin >> balance;

    BankAccount b1(accountNumber, accountName, accountType, balance);  // "b1" object is created
    b1.depositAmount(); //
    b1.withdrawAmount(); // Calling member functions
    b1.displayAccountDetails(); //

    return 0;
}
