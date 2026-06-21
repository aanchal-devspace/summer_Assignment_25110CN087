//Q96 Write a program to Remove duplicate characters

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : ";
    cin.getline(str,50);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='*') continue;
        
        for(int j=i+1;j<l;j++){
            if(str[i] == str[j]){
              str[j]='*';
            }
        }
        cout<<str[i];
    }

    return 0;
}

/*
Ouput:
Enter the word : aabbccaabc
abc
*/