#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class login{
    private:
    int id;
    int password;
    public:
    int a= id;
    int b= password;
    void setValue_login(){
        int user_id, user_password;
        cout<<"Enter your User ID and Password to GET STARTED. "<<endl;
        cout<<"Enter User ID: ";
        cin>>a;
        cout<<"Enter Password: ";
        cin>>b;
    } 
};

class Bank: public login{
    private:
    string name;
    string name1;
    long long account_number;
    string account_type;

    public:
    string n = name;
    long long total_amount= 0;
    long long amount = 0;
    int amount1 = 0;
    int amount2 = 0;
   
    void setValue_bank(){
        cout<<"Enter your Bank details to be added to our Bank DataBase:"<<endl;
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter account number: ";
        cin>>account_number;
        cout<<"Enter account type: ";
        cin>>account_type;
        cout<<"Enter Balance: ";
        cin>>total_amount;
        cout<<"Enter User ID: ";
        cin>>a;
        cout<<"Enter Password: ";
        cin>>b;
        cout<<"Your Bank details are successfully added."<<endl<<endl<<endl;
    }
    void showData_bank(){
        cout<<"Bank details for User ID "<<a<<": "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Account Type: "<<account_type<<endl;
        cout<<"Balance: "<<total_amount<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<endl;
    }

    void deposit(){
        cout<<endl<<"Enter amount to be Deposited: "<<endl;
        cin>>amount;
        total_amount = total_amount + amount;
        cout<<"Available balance is: "<<total_amount<<endl;
    }

    void withdrawal(){
        cout<<endl<<"Enter amount to withdraw: "<<endl;
        cin>>amount1;
        total_amount= total_amount - amount1;
        cout<<"Available Balance: "<<total_amount<<endl;
    }

    void transfer(){
        cout<<endl<<"Transfering Money"<<endl;
        cout<<"Enter Beneficiary Name: ";
        cin>>name1;
        getline(cin, name1);
        cout<<"Enter amount to transfer: ";
        cin>>amount2;
        total_amount= total_amount - amount2;
        cout<<"Available Balance: "<<total_amount<<endl;
    }
    void transaction_history(){
        cout<<endl<<"Deposited: Rs"<<amount<<endl;
        cout<<"Withdrawal: Rs"<<amount1<<endl;
        cout<<"Transfered: Rs"<<amount2<<endl;
        cout<<"Available Balance: Rs"<<total_amount<<endl;
    }
    void check_balance(){
        cout<<endl<<"Available Balance: "<<total_amount<<endl;
    }
};

int main(){

    Bank b;
    login l;
    b.setValue_bank();
    b.showData_bank();
    l.setValue_login();
    int choice;
    do{
        cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~"<<endl<<endl;
        cout<<"1.TRANSACTION HISTORY"<<endl<<"2.WITHDRAW"<<endl<<"3.DEPOSIT"<<endl<<"4.TRANSFER"<<endl<<"5.QUIT"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            b.transaction_history();
            cout<<endl;
            break;
            
            case 2:
            b.withdrawal();
            cout<<endl;
            break;
            
            case 3:
            b.deposit();
            cout<<endl;
            break;
            
            case 4:
            b.transfer();
            cout<<endl;
            break;

            case 5:
            cout<<endl<<"Thankyou for Banking."<<endl;
            exit(1);
            break;

            default:
            cout<<"Invalid Choice."<<endl;
        }
    }while(choice<=5 && choice>=1);
    return 0;
}
