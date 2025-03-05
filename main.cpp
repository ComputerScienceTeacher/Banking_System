#include <iostream>

using namespace std;

void startMenu(){
    cout << "======== BANKING SYSTEM ========" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "================================" << endl;
    cout << "Choose an option:";
}

void deposit(double& balance){
    double depositAmt;
    cout << "Enter amount to deposit: ";
    cin >> depositAmt;
    if(depositAmt <= 0){
        cout << "Invalid amount. Deposit must be positive." << endl;
    }
    else {
        balance += depositAmt;
        cout << "Deposit successful! New balance: $" << balance << endl;
    }
}

void withdraw(double& balance){
    double withdrawAmt;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmt;
    balance -= withdrawAmt;
    cout << "Withdraw successful! New balance: $" << balance << endl;
}

int main(){
    int choice;
    double balance = 0;
    do{
        startMenu();
        cin >> choice;
        if(choice==1){
            deposit(balance);
            
        }
        if(choice==2){
            withdraw(balance);
        }
        if(choice==3){
            cout << "Your current balance is: $" << balance;
        }

    } while (choice != 4);
}