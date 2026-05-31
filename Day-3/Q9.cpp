#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,count =0;
    cout<< "Enter a number : ";
    cin >> n;
    for(i=1;i<=n;i++){
        if(n%i == 0){
            count++ ;
        }
    }
    if(count == 2){
        cout<<"The given number is prime ";
    }
    else{
        cout <<"The given number is not prime ";
    }

    return 0;
}

/* Output : 
Enter a number : 13
The given number is prime

Enter a number : 6
The given number is not prime */