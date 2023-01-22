
#include <iostream>
#include "bankAccount.h"


int main() {
    std::string accountName, accountType;
    double balance;

    std::cout << "\nEnter Details:\n";
    std::cout << "-----------------------\n";
    std::cout << "Name: ";
    std::cin >> accountName;
    std::cout << "Account Type: ";
    std::cin >> accountType;
    std::cout << "Balance: ";
    std::cin >> balance;

    BankAccount b1(accountName, accountType, balance);  // "b1" object is created
    b1.depositAmount(); //
    b1.withdrawAmount(); // Calling member functions
    b1.displayAccountDetails(); //


    std::cout << "\n\nEnter Details:\n";
    std::cout << "-----------------------\n";
    std::cout << "Name: ";
    std::cin >> accountName;
    std::cout << "Account Type: ";
    std::cin >> accountType;
    std::cout << "Balance: ";
    std::cin >> balance;


    BankAccount b2(accountName, accountType, balance);  // "b2" object is created
    b2.depositAmount(); //
    b2.withdrawAmount(); // Calling member functions
    b2.displayAccountDetails(); //

    return 0;
}
