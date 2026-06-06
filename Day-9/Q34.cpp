//Q34 Write a program to Print reverse number triangle

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
        for(int k=i;k<=r;k++){
            cout<<k<< " ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Output : 
Enter number of rows : 5
1 2 3 4 5 
 2 3 4 5 
  3 4 5 
   4 5 
    5 
*/