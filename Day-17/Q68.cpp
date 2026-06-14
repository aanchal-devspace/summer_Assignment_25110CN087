//Q68 Write a program to Find common elements

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[10],arr2[10],size1,size2;
    cout<<"Enter number of elements is both arrays : ";
    cin>>size1>>size2;
    cout<<"Enter elements of array 1 : ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 2 : ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int large= max(size1,size2);
    cout<<"The common elements of both array is : ";
    for(int i=0;i<large;i++){
        for(int j=0;j<large;j++){
            if(arr1[i]==arr2[j])
            cout<<arr1[i]<<" ";

        }
    }
    return 0;
}

/*
Output :
Enter number of elements is both arrays : 4 3
Enter elements of array 1 : 4 5 6 7
Enter elements of array 2 : 5 6 1
The common elements of both array is : 5 6 
*/