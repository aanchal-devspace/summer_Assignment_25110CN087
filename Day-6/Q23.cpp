//Q23 Write a program to Count set bits in a number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cout <<"Enter a number : ";
    cin >>n;
    int n1=n;
    while(n!=0){
        int r=n%10;
        if(r == 1){
            c++;
        }
        n/=10;
    }
    cout  <<"The number of bits in "<< n1 << " is "<< c;
    return 0;
}

/*Output :
 Enter a number : 1011011
The number of bits in 1011011 is 5 */