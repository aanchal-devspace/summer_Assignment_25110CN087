#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,n,n1,rev=0;
    cout<< "Enter a number : ";
    cin>>n;
    n1=n;
    while(n!=0){
        r=n%10;
        rev= rev*10+r;
        n/=10;
        
    }
    if(rev==n1){
        cout<<"The number is palindrome "<< endl;
    }
    else{
        cout<< " Number is not palindrome "<< endl;
    }
    return 0;
}