//Q102 Write a program to Create voting eligibility system

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter your nationality : ";
    char str[500],valid[500] = "Indian";
    cin.getline(str,500);
    str[0] = toupper(str[0]);
    if(strcmp(str,valid) != 0){
        cout<<"Not eligible to vote ";

    }
    else{
        cout<<"Enter your age : ";
        int age;
        cin>>age;
        if(age >=18){
            cout<<"Eligible";
        }
        else{
            cout<<"Not eligible";
        }
    }

    return 0;
}

/*
Output :
Enter your nationality : indian
Enter your age : 20
Eligible

nter your nationality : nepalese
Not eligible to vote 
*/