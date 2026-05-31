#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,x,y,GCD;
    cout << "Enter two numbers : ";
    cin >> x>>y;

    for(i=1;i<=x && i<= y;i++){
        if(x%i == 0 && y%i ==0){
            GCD = i;
        }
           
    }
    cout << "The GCD of "<< x <<" and " << y << " is "<< GCD <<endl;

    return 0;
}

/* Output :
Enter two numbers : 56
96
The GCD of 56 and 96 is 8 */