//Q42 Write a program to Write function to find maximum

#include<bits/stdc++.h>
using namespace std;
int max(int num1,int num2){
    int maximum;
    if(num1>num2)
     maximum = num1;
    else
     maximum = num2;
    return maximum;


}
int main (){
    int a,b;
    cout<<"Enter two numbers : "<< endl;
    cin >>a>>b;
    cout <<"Maximum of two numbers is "<< max(a,b);
    return 0;
}

/*
Output : 
Enter two numbers : 
56
85
Maximum of two numbers is 85
*/