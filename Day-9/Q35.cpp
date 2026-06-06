//35 Write a program to Print repeated character pattern (A, BB, CCC...)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows for pattern : ";
    cin >>n;
    char ch = 'A';
    for(int i=1;i<=n;i++){
        
        for(int space=i;space<=n;space++){
            cout<<" " ;
        }
        for(int j=1;j<=i;j++){
            
            cout<<ch<<" ";
            
        }
        ch++;
        cout<<"\n";
    }
        
    return 0;
}

/* 
Output : 
Enter number of rows for pattern : 7
       A 
      B B 
     C C C 
    D D D D 
   E E E E E 
  F F F F F F 
 G G G G G G G 
 */
