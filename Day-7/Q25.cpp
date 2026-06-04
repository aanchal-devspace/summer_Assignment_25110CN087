//Q25 Write a program to Recursive factorial

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0|| n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    cout<< "Enter a number : ";
    cin >>n;
    cout<< "Factorial of "<< n<<" is "<< factorial(n);
    return 0;
}

/*Output : 
Enter a number : 5
Factorial of 5 is 120 */