/*A Strong Number is a positive integer where the sum of
 the factorials of its digits equals the number itself*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout <<"Enter a number : ";
    cin >> n;
    
    int n1=n;
    while(n!=0){
        int r= n%10 ;
        int fact = 1;
        for(int j=1;j<=r;j++){
            fact*=j;
            

        }
        
        sum+= fact;
        n/=10;
    }
    if(n1 == sum){
        cout<<"The given number is strong number ";

    }
    else{
        cout <<"The given number is not a strong number";
    }

    return 0;
}

/*Output :
Enter a number : 56
The given number is not a strong number

Enter a number : 145
The given number is strong number  */