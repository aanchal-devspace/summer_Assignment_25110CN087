#include<bits/stdc++.h>
using namespace std;
int main(){
    int fact=1,i,n;
    cout << "enter a number : ";
    cin >> n;
    for(i=1; i<=n;i++){
        fact*=i;
    }
    cout << "The factorial of "<< n <<" is "<< fact<< endl;
    return 0;
}

/* Output :
enter a number : 5
The factorial of 5 is 120 */
