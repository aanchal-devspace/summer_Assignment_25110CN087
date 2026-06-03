//Q21 Write a program to Convert decimal to binary.

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n, a=0,n1;
    
    cin>>n;
    n1=n;
    while(n!=0){
        int r = n%2; 
        a= a*10 + r;
        n/=2;
    }
    cout <<"The binary of "<< n1 << " is "<< a<< endl;
    return 0;
}

/* Output :
Enter a number : 7
The binary of 7 is 111 */