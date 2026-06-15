//Q71 Write a program to Binary search

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10],ele;
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Enter element to search : ";
    cin >>ele;
    int start =0;
    int end= size - 1;
    int mid = (start +end) / 2;
    while(start<= end && ele != arr[mid] ){
        if(ele < arr[mid])
        end = mid-1;
        else{
            start = mid +1;
        }
        mid = (start + end )/2;
    }
    if( ele == arr[mid]){
        cout<<"Element found at location "<<mid+1;
    }
    else
    cout <<"Element not found ";
    return 0;
}

/*
Output : 
Enter the number of elements in array : 4
Enter elements :
9 3 4 8
Enter element to search : 3
Element found at location 2
*/