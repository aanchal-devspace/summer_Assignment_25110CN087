//Q29 Write a program to Print half pyramid pattern

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows for half pyramid : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
        
    return 0;
}

/*  
Output : 
Enter number of rows for half pyramid : 5
*
**
***
****
***** 

*/