//Q57 Write a program to Reverse array

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
    
    for(int j=0;j<size/2;j++){
       swap(arr[j],arr[size-1-j]); 
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<< " ";
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 5
Enter elements :
4
8
6
2
7
7 2 6 8 4 
*/