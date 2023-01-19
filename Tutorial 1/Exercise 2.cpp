#include<iostream>
using namespace std;

class bank
{
    static int ObjectCount;
    int acno;
    char nm[100], acctype[100];
    float bal;

    public:
        bank(char* name, char* acc_type, float balance)  //Parameterized Constructor
        {

            acno = 105001000 + (++ObjectCount);
            strcpy(nm, name);
            strcpy(acctype, acc_type);
            bal = balance;
        }
        void deposit();
        void withdraw();
        void display();
};


int bank::ObjectCount = 0;


void bank::deposit()   //depositing an amount
{
    int damt1;
    cout << "\n Enter Deposit Amount = ";
    cin >> damt1;
    bal += damt1;
}


void bank::withdraw()  //withdrawing an amount
{
    int wamt1;
    cout << "\n Enter Withdraw Amount = ";
    cin >> wamt1;
    if (wamt1 > bal)
        cout << "\n Cannot Withdraw Amount";
    bal -= wamt1;
}


void bank::display()  //displaying the details
{
    cout << "\n ----------------------";
    cout << "\n Accout No. : " << acno;
    cout << "\n Name : " << nm;
    cout << "\n Account Type : " << acctype;
    cout << "\n Balance : " << bal;
}


int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter Details: \n";
    cout << "-----------------------";
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(name, acc_type, balance);  //object is created
    b1.deposit(); //
    b1.withdraw(); // calling member functions
    b1.display(); //


    cout << "\n Enter Details: \n";
    cout << "-----------------------";
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;
    bank b2(name, acc_type, balance);  //object is created

    b2.deposit(); //
    b2.withdraw(); // calling member functions
    b2.display(); //
    return 0;
}
