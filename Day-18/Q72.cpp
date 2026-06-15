//Q72 Write a program to Sort array in descending order

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10];
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements( with spaces) : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
    cout<<"The sorted array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
Output :
Enter the number of elements in array : 4
Enter elements( with spaces) : 5 8 6 2
The sorted array is : 8 6 5 2 
*/