#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0, b=1,n,c;
    cout <<"Enter number of terms required in fibonacci series : ";
    cin >> n;
    if (n==0){
        cout <<"Null";

    }
    if(n==1){
        cout <<a << endl;
    }
    else if(n==2){
        cout <<b <<endl;
    }
    else{
        cout<<a << "\n" << b<< endl;
        for(int i=1;i<=n-2;i++){ 
        c=a+b;
        cout << c << endl;
        a=b;
        b=c; 
        
        }

    }

    return 0;

}

/* Output :
Enter number of terms required in fibonacci series : 5
0
1
1
2
3 */