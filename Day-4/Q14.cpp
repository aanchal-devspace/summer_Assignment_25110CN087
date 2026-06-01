#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0, b=1,n,c;
    cout <<"Enter number whose nth term need to be calculated : ";
    cin >> n;
    for(int i=1;i<=n-2;i++){
        
        c=a+b;
        a=b;
        b=c; 
           
    }
    cout << " The "<< n<<"th"<<" term of fibonacci series is "<< c<<endl;

    

    return 0;

}

/*Output :
Enter number whose nth term need to be calculated : 6
 The 6th term of fibonacci series is 5 */