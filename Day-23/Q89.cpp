//Q89 Write a program to Find first non-repeating character

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    int length,count =0;
    cout<<"Enter the word : ";
    cin.getline(str,50);
    length = strlen(str);
    for(int i=0;i<length;i++){
        count=0;
        for(int j=0;j<length;j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<"The first non repeating character is : "<<str[i];
            return 0;
        }

    }
    cout<<"All characters are repeating ";

    return 0;
}

/*
Output : 
Enter the word : racecar
The first non repeating character is : e
*/