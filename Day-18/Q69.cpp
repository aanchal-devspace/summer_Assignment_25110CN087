//Q69 Write a program to Bubble sort


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
            if(arr[i]<arr[j])
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
Enter the number of elements in array : 5
Enter elements( with spaces) : 5 6 2 7 3
The sorted array is : 2 3 5 6 7 
*/