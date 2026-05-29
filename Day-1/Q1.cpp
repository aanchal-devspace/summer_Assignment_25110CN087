#include<bits\stdc++.h>
using namespace std;
int main(){
    int sum=0,i,n;
    cout << "enter a number ";
    cin >> n ;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout << "the sum is"<< sum<< endl;
    return 0;

}
/*ouput :
enter a number 10
the sum is 55*/
