#include<bits/stdc++.h>
using namespace std;
int main (){
    int r,sum=0,n,n1;
    cout << "Enter the number : ";
    cin >> n;
    n1=n ; 

    while(n!=0){
        r = n%10;
        sum+=r;
        n /=10;
    }
    cout <<"The sum of all digits of "<<n1 << " is " <<sum;
    return 0;
}