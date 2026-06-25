//Q110 Write a program to Create bank account system

#include<bits/stdc++.h>
using namespace std;
int main(){
    double balance = 3000;
    string name ="aanchal";
    int acc = 852963;

    cout<<" -----Account----- "<<'\n'<<"1. Check balance"<<endl;
    cout<<"2. Deposit money "<<'\n'<<"3. Withdraw money "<<'\n'<<"4. Account details \n"<<"5. Exit \n"<<endl;
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

        case 4 :{
            cout<<acc<<'\n'<<name<<'\n'<<balance<<endl;
        }

        case 5 :
        break;
    }

    return 0;
}

/*
Output :
 -----Account-----
1. Check balance
2. Deposit money
3. Withdraw money
4. Account details
5. Exit 

Enter your choice : 1
Your current balance is : 3000

Enter your choice : 2
Enter amount : 524
Money added !
Enter 1 to check balance : 1
Balance after deposit is : 3524

Enter your choice : 3
Enter amount : 2500
Money withdrawn ! Enter 1 to check balance : 1
Balance after withdrawl is : 500

Enter your choice : 4
852963
aanchal
3000

Enter your choice : 5
*/