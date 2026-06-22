//Q99 Write a program to Sort names alphabetically

#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50][500];
    int length;
    cout<<"Enter number of names : ";
    cin>>length;
    cout<<"Enter names : "<<endl;
    for(int i=0;i<length;i++){
        cin>>str[i];
        
    }
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length -1-i;j++){
            if(strcmp(str[j],str[j+1])>0){
                char temp[500];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);

            }
        }
    }
    cout<<"The sorted names are : "<<endl;
    for(int i=0;i<length;i++){
        cout<<str[i]<< endl;
    }


    return 0;
}
/*
Output :
Enter number of names : 4
Enter names :
Question
Code
Desktop
Summer
The sorted names are : 
Code
Desktop
Question
Summer
*/