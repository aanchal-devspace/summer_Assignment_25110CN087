//Q36 Write a program to Print hollow square pattern

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Enter number of rows : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==1|| i== n|| j==1|| j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

/*
Output : 
Enter number of rows : 5
*****
*   *
*   *
*   *
***** 
*/