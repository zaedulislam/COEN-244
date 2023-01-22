//
// Created by Zaedul Islam on 2023-01-14.
//
#include <iostream>
#include "bankAccount.h"

// Default Constructor
BankAccount::BankAccount(){}

// Parameterized Constructor
BankAccount::BankAccount(std::string accountName, std::string accountType, double balance)
{
    this->accountNumber = 105001000 + (++accountCount);
    this->accountName = accountName;
    this->accountType = accountType;
    this->balance = balance;
}

int BankAccount::accountCount = 0;

// Deposit an amount
void BankAccount::depositAmount()
{
    double depositAmount;
    std::cout << "\nEnter Deposit Amount: ";

    std::cin >> depositAmount;

    balance += depositAmount;
}


// Withdraw an amount
void BankAccount::withdrawAmount()
{
    float withdrawAmount;
    std::cout << "Enter Withdraw Amount: ";
    std::cin >> withdrawAmount;

    if (withdrawAmount > balance){
        std::cout << "\nCannot Withdraw Amount!";
        return;
    }

    balance -= withdrawAmount;
}


// Display account details
void BankAccount::displayAccountDetails()
{
    std::cout << "\n-----------------------";
    std::cout << "\nAccount No: " << accountNumber;
    std::cout << "\nName: " << accountName;
    std::cout << "\nAccount Type: " << accountType;
    std::cout << "\nBalance: " << balance;
}
