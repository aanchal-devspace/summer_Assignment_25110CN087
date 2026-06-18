// Q83 Write a program to Count vowels and consonants

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    int vowel=0,consonant=0;
    cout<<"Enter the word : ";
    cin.getline(str,50);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
        else{
            consonant++;
        }

    }
    cout<<"The vowels and consonents in word is : "<<vowel<<" and "<<consonant;
    return 0;
}

/*
Output :
Enter the word : Assumptions
The vowels and consonents in word is : 4 and 7
*/