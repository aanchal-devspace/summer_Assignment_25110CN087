// Q93 Write a program to Check string rotation


#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[50],str2[50],temp[50];
    cout<<"Enter the strings : "<<endl;
    cin.getline(str1,50);
    cin.getline(str2,50);
    
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2)){
        cout<<"Rotation found ";
    }
    else
    cout<<"Rotation not found ";
    
    

    return 0;
}
/*
Output :
Enter the strings :
abcd
cdab
Rotation found 

Enter the strings :
abcd
acdb
Rotation not found 
*/
