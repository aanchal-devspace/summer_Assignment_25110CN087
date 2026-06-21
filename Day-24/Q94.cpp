//Q94 Write a program to Compress a string

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : ";
    cin.getline(str,50);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i] == '*') continue;
        int freq=1;
        for(int j=i+1;j<l;j++){
            if(str[i] == str[j]){
              freq++;
              str[j]='*';
              
            }
            else{
                break;
            }
        }
        cout<<str[i]<< " "<< freq <<endl;
    }

    return 0;
}

/*
Output :
Enter the word : aabbbcdaaab
a 2
b 3
c 1
d 1
a 3
b 1
*/
