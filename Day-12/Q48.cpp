//Q48 Write a program to Write function for perfect number

#include<bits/stdc++.h>
using namespace std;
int isperfect(int num){
    int sum=0;
    for (int i=1;i<num;i++){
        int x=i;
        if (num%x==0){
          
          sum+= x;
  
        }
        
    }
    if(num ==sum){
        cout <<"The given number is perfect number ";
    }

    else{
        cout <<"The given number is not perfect number ";
    }
    return 0;
}


int main(){
    int n;
    cout <<"Enter a number : ";
    cin >>n;
    isperfect(n);
    return 0;
}

/*
Output : 
Enter a number : 6
The given number is perfect number 
*/