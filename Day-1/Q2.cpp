#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m=0,i,j;
    cout << "enter the number : ";
    cin >> n;
    cout << "enter range : ";
    cin >> j;
    for(i=1;i<=j;i++){
        m = n*i;
        cout << n << "*"<< i << " = "<< m << endl;
    }
    return 0;
}
/* Output :
enter the number : 6
enter range : 10
6*1 = 6
6*2 = 12
6*3 = 18
6*4 = 24
6*5 = 30
6*6 = 36
6*7 = 42
6*8 = 48
6*9 = 54
6*10 = 60 */
