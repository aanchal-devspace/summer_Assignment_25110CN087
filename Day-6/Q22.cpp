//Q22 Write a program to Convert binary to decimal.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b=1,d=0;
    cout<< "Enter a number : ";
    cin >>n;
    int n1=n;
    while(n!=0){
        int r= n%10;
        
        d+= r*b;
        b*=2;
        n/=10;
    }
    cout<< "The decimal value of "<< n1<<" is "<< d;
    
    return 0;
}

/*Output : 
Enter a number : 100101
The decimal value of 100101 is 37 */