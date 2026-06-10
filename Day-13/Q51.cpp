//Q51 Write a program to Find largest and smallest element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10];
    cout<<"Enter number of elements in array : ";
    cin >> size;
    cout<<"Enter elements of array : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
       
    }
    int small = INT_MAX;
    int large = INT_MIN;
    for(int j=0;j<size;j++){
        if(arr[j]<small)
        small= arr[j];

        else if(arr[j]>large)
        large =arr[j];

    }
    cout<<"The largest and smallest element is "<< large <<" and "<< small;
    return 0;
}

/*
Output : 
Enter number of elements in array : 3
Enter elements of array :
45
85
68
The largest and smallest element is 85 and 45
*/