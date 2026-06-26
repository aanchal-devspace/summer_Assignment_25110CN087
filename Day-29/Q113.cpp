//Q113 Write a program to Create menu-driven calculator

#include<bits/stdc++.h>
using namespace std;
int main(){
    int choice;
    long long num1,num2;
    do{
        cout<<"\n\n-----CALCULATOR------\n1. Addition \n2. Substraction \n3. Division \n4. Remainder \n5. Multiplication\n6. Exit\n";
        cout<<"Enter your choice : ";
    
        cin>>choice ;
        switch(choice){
            case 1 :{
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Addition is : "<< num1+num2;
                break;
                
            }
            case 2:{
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Substraction is : "<< num1-num2;
                break;
                
            }
            case 5 :{
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Multiplication is : "<< num1*num2;
                break;
            }
            case 3 : {
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                if(num2 !=0){
                   cout<<"Division is : "<< (double)num1/num2;
                }
                else{
                    cout<<"Not valid division ";
                }
                break;
            }
            case 4 :{
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                if(num2 == 0){
                    cout<<"Cant find remainder with denominator 0";
                    
                }
                else{
                    cout<<"Remainder is : "<< num1%num2;
                    
                }
                break;
            }
            case 6 :{
                cout<<"Thank you ";
                break;
            }
            default : {
                cout<<"Invalid choice\n";
            }
        }

    }while(choice != 6);
    return 0;
}

/*
Output :
-----CALCULATOR------
1. Addition
2. Substraction
3. Division
4. Remainder
5. Multiplication
6. Exit
Enter your choice : 1
Enter two numbers : 456987 147852
Addition is : 604839

-----CALCULATOR------
1. Addition 
2. Substraction
3. Division 
4. Remainder 
5. Multiplication
6. Exit
Enter your choice : 2
Enter two numbers : 741 856
Substraction is : -115

-----CALCULATOR------
1. Addition 
2. Substraction
3. Division 
4. Remainder 
5. Multiplication
6. Exit
Enter your choice : 3
Enter two numbers : 85 3
Division is : 28.3333

-----CALCULATOR------
1. Addition 
2. Substraction 
3. Division 
4. Remainder 
5. Multiplication
6. Exit
Enter your choice : 4
Enter two numbers : 96 5
Remainder is : 1

-----CALCULATOR------
1. Addition 
2. Substraction 
3. Division 
4. Remainder 
5. Multiplication
6. Exit
Enter your choice : 5 
Enter two numbers : 74 0
Multiplication is : 0

-----CALCULATOR------
1. Addition
2. Substraction 
3. Division 
4. Remainder 
5. Multiplication
6. Exit
Enter your choice : 6
Thank you 
*/