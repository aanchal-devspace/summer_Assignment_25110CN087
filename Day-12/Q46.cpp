//Q46 Write a program to Write function for Armstrong
#include<bits/stdc++.h>
using namespace std;
int isarmstrong(int m){
    int count=0,sum=0;
    int num1=m;
    while(m!=0){
         
         count ++;
         m/=10;
    }
     int num2= num1;
    while(num1!=0){
       int r= num1%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power*=r;
        }
        sum+= power;
        num1/=10;
    }
    cout << sum<< endl;  
    
    if(num2== sum){
        cout <<"The given number is an armstrong number "<< endl;
    }
    else{
        cout <<"The given number is not an armstrong number "<< endl;
    }


    return 0;
    
}


int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    isarmstrong(n);
    return 0;
}

/*
Output : 
Enter a number : 5
5
The given number is an armstrong number 
*/