//Q44 Write a program to Write function to find factorial

#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The factorial of given number is "<<factorial(n);
    return 0;
}

/*
Output :
Enter a number : 7
The factorial of given number is 5040
*/