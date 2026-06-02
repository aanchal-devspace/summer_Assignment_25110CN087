#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, largest =0;
    cout <<"Enter a number : ";
    cin >> n;

    for(int i=1;i<=n;i++){
        int x = i;
        if(n%x ==0){
            int count =0;
            for(int j=1;j<=x;j++){
                
                int y=j;
                if(x%y==0){
                    count ++;
                }
            }
             if(count == 2){
                largest =x;
             }
        
        
        }
    }
    cout<<"The largest prime factor is "<< largest<< endl;
    return 0;
}

/*Output :
Enter a number : 86
The largest prime factor is 43 */