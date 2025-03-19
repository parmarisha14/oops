#include<iostream>
using namespace std;
class BankAccount{
    public:
    int accountNumber;
    string  accountHolerName;
    protected:
    double balance;
    public:
    BankAccount(){
        accountNumber=202423;
        accountHolerName="Raj";
        balance=5000;
    }
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposit Successfully. "<<endl;
        cout<<"Balance is: "<<balance<<endl;

    }
    void withdraw(double amount){
        if(amount==0){
            cout<<"Not allowed the withdraw."<<endl;
        }
        else if(amount>balance){
            cout<<"Not allowed the withdraw."<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdraw SuccessFully."<<endl;
            cout<<"Balance is: "<<balance<<endl;
        }
    }
    void getBalance(){
        cout<<"Your balance is: "<<balance<<endl;
    }
    void displayAccountInfo(){
        cout<<"Account Number is: "<<accountNumber<<endl
            <<"Acccount Name is: "<<accountHolerName<<endl
            <<"Account Balance is: "<<balance<<endl;
    }
};
class SavingsAccount:public BankAccount
{
    double interestRate;
    public:
    SavingsAccount(){
        interestRate=2;

    }
    void calculateInterest(){
        double interest=(balance*interestRate)/100;
        balance+=interest;
        cout<<"Interest amount is:"<<interest<<endl;
        cout<<"Balance is: "<<balance<<endl;
    }
};
class CheckingAccount:public BankAccount{
    int overdraftLimit;
    public:
    CheckingAccount(){
        overdraftLimit=1000;
    }
    void checkOverdraft(){
        cout<<"Over draft limit is: "<<overdraftLimit<<endl;
    }
};
class FixedDepositAccount:public BankAccount{
    int term;
    double interestRate;
    double balance;
    public:
    FixedDepositAccount(){
        term=12;
        interestRate=5;
        balance=0;
    }
    void deposit(double amount,int month){
        balance=amount;
        term=month;
    }
    void calculateInterest(){
        double interest=(balance*interestRate*term)/100;
         balance+=interest;
        cout<<"the deposit is interest is: "<<interest<<endl;
        cout<<"balance is:"<<balance<<endl;
    }
    
};
int main(){
    int choice;
    SavingsAccount b1;
    CheckingAccount c1;
    FixedDepositAccount d1;
    do{
        if(choice==0){
            cout<<"The exit for the exit."<<endl;
        }
        cout<<"Press 1 for deposit."<<endl
            <<"Press 2 for withdraw."<<endl
            <<"Press 3 for balance."<<endl
            <<"Press 4 for accountinfo."<<endl 
            <<"Press 5 for saving account interest."<<endl
            <<"Press 6 for check the overdraft limit"<<endl
            <<"Press 7 for deposit to fixed deposit."<<endl
            <<"Press 0 for exit."<<endl;

        cout<<"enter your choice:";
        cin>>choice;
        int amount,withdrawamount,term;
        double rupess;
        switch (choice)
        {
        case 1:
            cout<<"Enter the deposit amount is: ";
            cin>>amount;
            b1.deposit(amount);
            cout<<endl;
            break;
        case 2:
            cout<<"Enter the withdraw amount is: ";
            cin>>withdrawamount;
            b1.withdraw(withdrawamount);
            cout<<endl;
            break;
        case 3:
            b1.getBalance();
            cout<<endl;
            break;
        case 4:
            b1.displayAccountInfo();
            cout<<endl;
            break;
        case 5:
            b1.calculateInterest();
            cout<<endl;
            break;
        case 6:
            c1.checkOverdraft();
            cout<<endl;
            break;
        case 7:
            cout<<"Enter the fixed amount is: ";
            cin>>rupess;
            cout<<"Enter the term to fix the amount: ";
            cin>>term;
            d1.deposit(rupess,term);
            d1.calculateInterest();
            break;
        default:
            cout<<"Invalid choice."<<endl;
            break;
        }
    }while(choice!=0);
    return 0;
}