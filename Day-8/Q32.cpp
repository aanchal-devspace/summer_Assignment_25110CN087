//Q32 Write a program to Print repeated-number pattern (1, 22, 333...)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows for pattern : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
        
    return 0;
}

/* 
Output : 
Enter number of rows for pattern : 7
1
22
333
4444
55555
666666
7777777 
*/