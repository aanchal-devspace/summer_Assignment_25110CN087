//Q97 Write a program to Merge two sorted arrays

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[20],arr2[20],n1,n2,arr3[40];
    cout<<"Enter number of elements in both array : ";
    cin>>n1>>n2;
    cout<<"Enter elements of first array "<< endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array "<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
    cout<<"The merged array is : ";
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}

/*
Output :
Enter number of elements in both array : 3 4
Enter elements of first array
2 3 6
Enter elements of second array
4 5 7 9
The merged array is : 2 3 4 5 6 7 9
*/