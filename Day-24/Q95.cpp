//Q95 Write a program to Find longest word

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,word ="",longest = "";
    int length=0,count;
    int max =INT_MIN;
    cout<<"Enter the sentence : ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(i!=str.length() && str[i] != ' '){
            word+=str[i];
        }
        else{
            if(word.length()>longest.length()){
              longest = word;
              word ="";
            }
        }
    }
    cout<<"The longest word is "<<longest;

    return 0;
}

/*
Output :
Enter the sentence : C is case sensitive language
The longest word is sensitive
*/