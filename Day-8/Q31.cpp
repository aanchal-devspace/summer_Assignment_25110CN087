//Q31 Write a program to Print character triangle pattern (A, AB, ABC...)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows for pattern : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int space=i;space<=n;space++){
            cout<<" " ;
        }
        for(int j=1;j<=i;j++){
            
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
        
    return 0;
}

/*
Output : 
Enter number of rows for pattern : 6
      A 
     A B 
    A B C 
   A B C D 
  A B C D E 
 A B C D E F 
 */