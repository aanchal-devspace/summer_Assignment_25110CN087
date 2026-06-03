//Q24 Write a program to Find x to power n without pow()

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n,p=1;
    cout<<"Enter the base and power : ";
    cin >> x>>n;
     for(int i=1;i<=n;i++){
        p*=x;

     }
     cout << x<< " to the power "<< n<< " is "<<p;
    return 0;
}

/* Output : 
Enter the base and power : 8
3
8 to the power 3 is 512 */