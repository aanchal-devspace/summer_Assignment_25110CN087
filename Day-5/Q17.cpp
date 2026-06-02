/* perfect number is a positive integer that is exactly 
equal to the sum of its positive proper divisors 
(excluding the number itself) */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cout <<"Enter a number : ";
    cin >> n;
    for (int i=1;i<n;i++){
        int x=i;
        if (n%x==0){
          
          sum+= x;
  
        }
        
    }
    if(n ==sum){
        cout <<"The given number is perfect number ";
    }

    else{
        cout <<"The given number is not perfect number ";
    }
    return 0;
}

/*Output :
Enter a number : 75
The given number is not perfect number

Enter a number : 28
The given number is perfect number */