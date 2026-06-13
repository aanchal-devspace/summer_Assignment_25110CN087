//Q64 Write a program to Remove duplicates from array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10];
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int j=0;
    for(int k=1;k<size;k++){
        if(arr[k]!=arr[j]){
            j++;
            arr[j]=arr[k];
        }
    }
    cout<<"Array after removing duplicates is : ";
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 4
Enter elements :
7
7
4
5
Array after removing duplicates is : 7 4 5 
*/