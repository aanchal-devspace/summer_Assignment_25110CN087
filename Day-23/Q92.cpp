//Q92 Write a program to Find maximum occurring character

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50],c;
    int length,count =0;
    cout<<"Enter the word : ";
    cin.getline(str,50);
    length = strlen(str);
    int max =INT_MIN;
    for(int i=0;i<length;i++){
        count=0;
        for(int j=0;j<length;j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            c=str[i];
        }

    }
    cout<<"The maximum occuring character is : "<<c;
    return 0;

    
}

/*
Output : 
Enter the word : maximum
The maximum occuring character is : m
*/
