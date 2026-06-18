//Q81  Write a program to Find string length without `strlen()`

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    int length=0;
    cout<<"Enter the word : ";
    cin.getline(str,50);
    while(str[length] != '\0'){
        length++;

    }
    cout<<"The length of given word is : "<< length;

    return 0;
}
/*
Output :
Enter the word : Full stack development
The length of given word is : 22
*/