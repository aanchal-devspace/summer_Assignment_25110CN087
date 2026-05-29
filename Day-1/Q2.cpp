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