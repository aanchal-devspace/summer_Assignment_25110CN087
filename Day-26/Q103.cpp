//Q103 Write a program to Create ATM simulation

#include<bits/stdc++.h>
using namespace std;
int main(){
    double balance = 3000;
    cout<<" -----ATM Menu----- "<<'\n'<<"1. Check balance"<<endl;
    cout<<"2. Deposit money "<<'\n'<<"3. Withdraw money "<<'\n'<<"4. Exit "<<endl;
    cout<<"Enter your choice : ";
    int choice=0,money=0,enter;
    cin>>choice;
    switch(choice){
        case 1 : 
        cout<<"Your current balance is : "<<balance;
        break;

        case 2 :
        cout<<"Enter amount : ";
        cin>>money;
        balance +=money;
        cout<<"Money added ! "<<'\n' <<"Enter 1 to check balance : ";
        cin>>enter;
        if(enter == 1){
            cout<<"Balance after deposit is : "<<balance ;
        }
        break;

        case 3 :
        cout<<"Enter amount : ";
        cin>>money ;
        if(balance >= money){
            balance -= money;
            cout<<"Money withdrawn ! "<<"Enter 1 to check balance : ";
            cin>>enter;
            if(enter == 1){
              cout<<"Balance after withdrawl is : "<<balance ;
            }
            
        }
        else{
            cout<<"Insufficient balance ";
        }
        break;

        case 4 :
        break;
    }

    return 0;
}

/*
Output :
-----ATM Menu----- 
1. Check balance
2. Deposit money
3. Withdraw money
4. Exit
Enter your choice : 2
Enter amount : 1200
Money added ! 
Enter 1 to check balance : 1
Balance after deposit is : 4200
*/