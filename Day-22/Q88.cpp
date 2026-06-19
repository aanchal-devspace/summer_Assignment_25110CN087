//Q88 Write a program to Remove spaces from string

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : ";
    cin.getline(str,50);
    
    int j=0;
    for(int k=0;str[k] != '\0';k++){
        if(str[k]!=' '){
            str[j]=str[k];
            j++;
        }
    }
    str[j] = '\0';
    cout<<str;
    return 0;
}

/*
Output : 
Enter the word : s t r i n g
string
*/