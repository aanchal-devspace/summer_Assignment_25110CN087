#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,count =0,n1;
    cout << "Enter a number : ";
    cin >> n;
    n1=n;
    
    while(n!=0){
        
            count+=1;
        n/=10;
    }
    cout << "The digit in "<< n1<< " is "<< count<<endl;

    return 0;
}
/*ouput:
Enter a number : 123654
The digit in 123654 is 6 */
