#include<bits/stdc++.h>
using namespace std ;
int main (){
    int x,y,n1,n2,r;
    cout <<"Enter the range(start and end) : ";
    cin >> x >> y ;
    for(int i=x;i<=y;i++){
        int count =0;
        int sum =0;
       n1=i;
       n2=n1;
    while(n1!=0){
        count ++;
        n1/=10;
    }
    int n3=n2;
    while(n2!=0){
        r= n2%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power*=r;
        }
        sum+= power;
        n2/=10;
    }
    if(n3== sum){
    cout << sum<< endl;
     }  
    }


    return 0;
}

/* Output :
Enter the range(start and end) : 1
200
1
2
3
4
5
6
7
8
9
153 */