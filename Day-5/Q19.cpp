#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Enter a number : ";
    cin >> n;

    for(int i=1;i<=n;i++){
        int x = i;
        if(n%x ==0){
            cout <<x <<endl;
        }
    }
    return 0;
}

/* Output:
Enter a number : 12
1
2
3
4
6
12 */