//
// Created by Zaedul Islam on 2023-01-14.
//
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

// Default Constructor
BankAccount::BankAccount(){}

// Parameterized Constructor
BankAccount::BankAccount(int accountNumber, std::string accountName, std::string accountType, double balance)
{
    this->accountNumber = accountNumber;
    this->accountName = accountName;
    this->accountType = accountType;
    this->balance = balance;
}


// Deposit an amount
void BankAccount::depositAmount()
{
    double depositAmount;
    std::cout << "\nEnter Deposit Amount: ";

    cin >> depositAmount;

    balance += depositAmount;
}


// Withdraw an amount
void BankAccount::withdrawAmount()
{
    float withdrawAmount;
    cout << "Enter Withdraw Amount: ";
    cin >> withdrawAmount;

    if (withdrawAmount > balance){
        cout << "\nCannot Withdraw Amount!";
        return;
    }

    balance -= withdrawAmount;
}


// Display account details
void BankAccount::displayAccountDetails()
{
    cout << "\n-----------------------";
    cout << "\nAccount No: " << accountNumber;
    cout << "\nName: " << accountName;
    cout << "\nAccount Type: " << accountType;
    cout << "\nBalance: " << balance;
}
