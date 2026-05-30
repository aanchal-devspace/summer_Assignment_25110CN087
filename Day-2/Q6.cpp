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
    cout << "The reverse of "<<n1<<" is "<<rev<<endl;
    return 0;
}