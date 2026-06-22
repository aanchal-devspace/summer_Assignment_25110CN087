//Q98 Write a program to Find common characters in strings

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[50],str2[50];
    cout<<"Enter both strings : "<<endl;
    cin.getline(str1,50);
    cin.getline(str2,50);
    
    cout<<"The common characters are : ";
    for(int i=0;str1[i] !='\0';i++){
        for(int j=0;str2[j]!='\0';j++){
            if(str2[j] == '*') continue ;
            if(str1[i] == str2[j]){
                cout<<str2[j]<<" ";
                str2[j]='*'; 
                break;
            }
        }
    }
    return 0;
}

/*
Output :
Enter both strings :
summer
sum
The common characters are : s u m 
*/