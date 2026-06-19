//Q86 Write a program to Count words in a sentence

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[500];
    int count=0;
    cout<<"Enter the sentence(add full stop at the end) : "<<endl;
    cin.getline(str,500);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i] == ' ')
        count++;
    }
    cout<<"The words in given sentence is : "<<count+1;


    return 0;
}

/*
Output : 
Enter the sentence :
Array stores element in consecutive address.
The words in given sentence is : 6
*/