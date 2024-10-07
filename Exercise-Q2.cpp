/* Define a class for a bank account that includes the following data members:
> Name of the depositer
> Account Number
> Type of account 
> Balance amount in the account 
The class also contains the following member function:
> A constructor to assign initial values
> Deposit function to deposit some amount. It should accept the amount as parameter. 
> Withdraw function to withdraw an amount after checking the balance. It should accept the amount as parameter.
> Display function to display name and balance.
*/

#include <iostream>
#include <string>

using namespace std;

class Bank_Account{
private:    
    string holder_name;
    int account_no;
    string account_type;
    float balance;
public:
    Bank_Account(){
        cout << "Enter Holder's name : ";
        getline(cin, holder_name);
        cout << "Enter Account no. : ";
        cin >> account_no;
        cin.ignore();
        cout << "Enter Account type : ";
        getline(cin, account_type);
        cout << "Enter balance : ";
        cin >> balance;
        cin.ignore();
    }
    void deposit(float amount);
    void withdrawl(float amount);
    void display ()
    {
        cout << "Holder's Name : " << holder_name << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

void Bank_Account::deposit(float amount){
    cout << "Enter amount, You want to deposit : ";
    cin >> amount;
    cin.ignore();

    balance = balance + amount;
}
void Bank_Account::withdrawl(float amount){
    cout << "Enter amount, You want to withdrawl : ";
    cin >> amount;
    cin.ignore();
    
    if (balance > amount)
    {
        balance = balance - amount;
    }
    else
    {
        cout << "Insufficent Balance !!" << endl;
    }
}


main()
{
    cout << "\n\n-----------------------------------\n\n";
    Bank_Account b1;
    float amount;
    cout << "\n\t.....Account Details.....\n\n";
    b1.display();
    cout << "\n\t.....Deposit Money.....\n\n";
    b1.deposit(amount);
    cout << "\n\t.....Withdraw Money.....\n\n";
    b1.withdrawl(amount);
    cout << "\n\t.....Account Details.....\n\n";
    b1.display();
    cout << "\n\n-----------------------------------\n\n";
}