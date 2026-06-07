//Q39 Write a program to Print number pyramid.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num =1;
    cout <<"Enter number of rows for pattern : ";
    cin >>n ;
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" " ;
        }
        for(int k=1;k<=i;k++){
            cout<<num<<"  " ;
            num++;
        }
        cout<<"\n";
    }
        
    return 0;
}


/*
Output : 
Enter number of rows for pattern : 5
     1  
    2  3  
   4  5  6  
  7  8  9  10  
 11  12  13  14  15  
 */