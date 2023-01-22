//
// Created by Zaedul Islam on 2023-01-14.
//

#ifndef CPP_BANKACCOUNT_H
#define CPP_BANKACCOUNT_H


class BankAccount
{
    private:
        // Data Members
        static int accountCount;
        int accountNumber;
        std::string accountName;
        std::string accountType;
        double balance;

    public:
        // Default Constructor
        BankAccount();

        // Parameterized Constructor
        BankAccount(std::string accountName, std::string accountType, double balance);

        // Member Functions
        // Deposit an amount
        void depositAmount();
        // Withdraw an amount
        void withdrawAmount();
        // Display account details
        void displayAccountDetails();
};

#endif //CPP_BANKACCOUNT_H
