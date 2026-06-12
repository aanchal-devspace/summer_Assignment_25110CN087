//Write a program to Rotate array left

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10],rotate;
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Enter rotation number :";
    cin >> rotate;
    for(int j=0;j<size/2;j++){
        swap(arr[j],arr[j+rotate]);
        
    }
    for(int k=0;k<size;k++){
        cout <<arr[k]<<" ";
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 4
Enter elements :
1
4
7
6
Enter rotation number :2
7 6 1 4 
*/