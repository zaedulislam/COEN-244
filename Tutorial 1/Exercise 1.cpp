#include<iostream>
using namespace std;


class bank
{
    int accountNumber;
    string name, accountType;
    float balance;

public:
    bank(int accountNumber1, string name, string accountType, float balance)  //Parameterized Constructor
    {
        this->accountNumber = accountNumber;
        this->name = name;
        this->accountType = accountType;
        this->balance = balance;
    }

    void deposit();
    void withdraw();
    void display();
};


void bank::deposit()   //depositing an amount
{
    float depositAmount;
    cout << "\nEnter Deposit Amount : ";
    cin >> depositAmount;
    balance += depositAmount;
}


void bank::withdraw()  //withdrawing an amount
{
    float withdrawAmount;
    cout << "Enter Withdraw Amount : ";
    cin >> withdrawAmount;

    if (withdrawAmount > balance){
        cout << "\nCannot Withdraw Amount!";
        return;
    }


    balance -= withdrawAmount;
}


void bank::display()  //displaying the details
{
    cout << "\n ----------------------";
    cout << "\nAccount No : " << accountNumber;
    cout << "\nName : " << name;
    cout << "\nAccount Type : " << accountType;
    cout << "\nBalance : " << balance;
}


int main() {
    int acc_no;
    string name, accountType;
    float balance;

    cout << "\nEnter Details:\n";
    cout << "-----------------------\n";
    cout << "Account No : ";
    cin >> acc_no;
    cout << "Name : ";
    cin >> name;
    cout << "Account Type : ";
    cin >> accountType;
    cout << "Balance : ";
    cin >> balance;

    bank b1(acc_no, name, accountType, balance);  //object is created
    b1.deposit(); //
    b1.withdraw(); // calling member functions
    b1.display(); //

    return 0;
}
