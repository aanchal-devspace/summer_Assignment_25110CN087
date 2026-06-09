//Q47 Write a program to Write function for Fibonacci

#include<bits/stdc++.h>
using namespace std;
int fibonacci(int num){
    int digit1=0,digit2=1,val;
    if(num==1)
    return digit1 ;
    else if(num==2)
    return digit2;
    else{
        cout<<digit1 <<"\n"<< digit2<<endl;
        for(int i=1;i<=num-2;i++){

           val= digit1 + digit2 ;
           cout<< val<< endl;
           digit1= digit2;
           digit2 = val;
       }
       return 0;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin >>n;
    fibonacci(n);
    return 0;
}

/*
Output : 
Enter a number : 4
0
1
1
2
*/