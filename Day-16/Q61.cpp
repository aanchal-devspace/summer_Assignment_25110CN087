//Q61 Write a program to Find missing number in array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[100];
    cout<<"Enter elements in array : ";
    cin >>size;
    int n= size;
    cout<<"Enter elements : ";
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cout<<"The missing elements are ";
    for(int j=0;j<size;j++){
        n^=j;
        n^=arr[j];
    }
    cout << n;

    return 0;
}

/*
Output :
Enter elements in array : 4
Enter elements : 1
4
7
5
The missing elements are 3
*/