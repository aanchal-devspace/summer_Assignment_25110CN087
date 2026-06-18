//Q82 Write a program to Reverse a string

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : ";
    cin.getline(str,50);
    int l=strlen(str);
    cout<<"The reverse of word is : ";
    for(int i=l-1;i>=0;i--){
        cout<<str[i];
    }

    return 0;
}

/*
Outout : 
Enter the word : String
The reverse of string is : gnirtS 
*/