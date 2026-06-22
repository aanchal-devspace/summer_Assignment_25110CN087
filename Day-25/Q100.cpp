//Q100 Write a program to Sort words by length

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50][50];
    int l;
    cout<<"Enter number of words : ";
    cin>>l;
    cout<<"Enter the names : "<<endl;
    for(int i=0;i<l;i++){
        cin>>str[i];
    }
    
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-1-i;j++){
            int l1 = strlen(str[j]);
            int l2 = strlen(str[j+1]);
            if(l1>l2){
            char temp[500];
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
        }
        }
    }
    cout<<"The sorted names are : "<<endl;
    for(int i=0;i<l;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}
/*
Output :
Enter number of words : 4
Enter the names :
summer
user
development
app
The sorted names are :
app
user
summer
development
*/