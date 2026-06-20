//Q91 Write a program to Check anagram strings

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[50],str2[50];
    cout<<"Enter both words : "<<endl;
    cin.getline(str1,50);
    cin.getline(str2,50);
    int length = strlen(str1);
    int count=0;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(str1[i]==str2[j]){
                count++;
            }

        }

    }
    if(count==length )
    cout<<"strings are anagram";
    else
    cout<<"strings are not anagram ";

    return 0;
}

/*
output :
Enter both words :
race
care
strings are anagram
*/