//Q26 Write a program to Recursive Fibonacci

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==1){
     return 0;
    }
    else if(n==2){
     return 1;
     }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }

}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout<<fibonacci(i)<< endl;
    }

    return 0;
}

/*Output : 
Enter a number : 5
0
1
1
2
3 */