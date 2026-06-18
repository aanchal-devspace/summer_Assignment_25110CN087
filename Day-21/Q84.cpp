//Q84 Write a program to Convert lowercase to uppercase

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : "<<endl;
    cin.getline(str,50);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>'a'&&str[i]<'z')
        str[i]-=32;
    }
    cout<<str;
    return 0;
}

/*
Output :
Enter the word :
string
STRING
*/