//Q70 Write a program to Selection sort

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
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min])
            min =j;
        }
        swap(arr[i],arr[min]);
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
Enter elements( with spaces) : 8 6 9 1 3
The sorted array is : 1 3 6 8 9 
*/