//Q30 Write a program to Print number triangle pattern (1, 12, 123...)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Enter number of rows for pattern : ";
    cin >>n ;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" " ;
        }
        for(int k=1;k<=i;k++){
            cout<<k<<"  " ;
        }
        cout<<"\n";
    }
        
    return 0;
}

/* Output : 
Enter number of rows for pattern : 5
     1  
    1  2  
   1  2  3  
  1  2  3  4  
 1  2  3  4  5  
 */