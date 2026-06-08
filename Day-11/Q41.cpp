//Q41 Write a program to Write function to find sum of two numbers

#include<bits/stdc++.h>
using namespace std;
int sum(int num1,int num2){
    return num1 + num2;

}
int main(){
    int a,b;
    cout<<"Enter two numbers : "<< endl;
    cin >>a>>b;
    cout << "The sum of two numbers is : "<< sum(a,b);
    return 0;
}

/*
Output : 
Enter two numbers : 
78
63
The sum of two numbers is : 141
*/
