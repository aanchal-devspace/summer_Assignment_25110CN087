//Q38 Write a program to Print reverse pyramid

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter number of rows : ";
    int r;
    cin >>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<i;j++){
            cout <<" ";
        }
        for(int k=r;k>=i;k--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Output : 
Enter number of rows : 7
* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 
*/