//Q87 Write a program to Character frequency

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the word : ";
    cin.getline(str,50);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='*') continue;
        int freq=1;
        for(int j=i+1;j<l;j++){
            if(str[i] == str[j]){
              freq++;
              str[j]='*';
            }
        }
        cout<<str[i]<< " "<< freq <<endl;
    }

    return 0;
}

/*
Output :
Enter the word : assignment
a 1
s 2
i 1
g 1
n 2
m 1
e 1
t 1
*/