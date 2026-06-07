//Q37 Write a program to Print star pyramid

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
            cout<<"* " ;
        }
        cout<<"\n";
    }
        
    return 0;
}

/* 
Output : 
Enter number of rows for pattern : 8
        * 
       * * 
      * * * 
     * * * * 
    * * * * * 
   * * * * * * 
  * * * * * * * 
 * * * * * * * * 
*/