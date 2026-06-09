//Q45 Write a program to Write function for palindrome

#include<bits/stdc++.h>
using namespace std;
int palindrome(int m){
    int rev=0,r,num1=m; //storing for further checking
    while(m!=0){
        r= m%10;
        rev=rev*10+r; //reverse of number
        m/=10;

    }
    if(num1==rev){
        cout<<"Palindrome ";
    }
    else
    cout<<"Not palindrome ";
    return 0;

}
int main(){
    int n;
    cout <<"Enter a number : ";
    cin >>n;
    palindrome(n);

    return 0;
}

/*
Output : 
Enter a number : 147
Not palindrome 

Enter a number : 323
Palindrome 
*/