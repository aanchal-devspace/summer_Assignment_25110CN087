//Q85 Write a program to Check palindrome string

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[50],str2[50],rev[50];
    cout<<"Enter a word : ";
    cin.getline(str1,50);
    strcpy(str2,str1);
    strcpy(rev,strrev(str1));
    if(strcmp(str2,rev) == 0){
        cout<<"The string is palindrome ";
    }
    else
    cout<<"Not palindrome ";
    return 0;
}

/*
Output :
Enter a word : string
Not palindrome 

Enter a word : madam
The string is palindrome 
*/