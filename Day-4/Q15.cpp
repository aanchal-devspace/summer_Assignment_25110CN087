#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,r,count =0,n1,n2;
    cout <<"Enter a number : ";
    cin >>n ;
    n1=n;
    while(n!=0){
        count ++;
        n/=10;
    }
    n2=n1;
    while(n1!=0){
        r= n1%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power*=r;
        }
        sum+= power;
        n1/=10;
    }
    cout << sum<< endl;  
    
    if(n2== sum){
        cout <<"The given number is an armstrong number "<< endl;
    }
    else{
        cout <<"The given number is not an armstrong number "<< endl;
    }


    return 0;
}

/*Output :
Enter a number : 25
29
The given number is not an armstrong number 

Enter a number : 153
153
The given number is an armstrong number */