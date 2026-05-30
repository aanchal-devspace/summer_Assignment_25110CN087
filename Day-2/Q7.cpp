#include<bits/stdc++.h>
using namespace std;
int main(){
    int p=1,n,n1,r;
    cout<< "Enter a number : ";
    cin>> n;
    n1=n;
    while(n!=0){
        r= n %10;
        p*=r;
        n/=10;
    }
    cout << "The product of "<< n1<<" is "<< p<<endl;
    return 0;
}

/* Output: 
Enter a number : 25 
The product of 25 is 10
*/