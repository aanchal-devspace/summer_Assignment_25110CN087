//Q59 Write a program to Rotate array right

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
    int temp[10];
    for(int j=0;j<size;j++){
        temp[(j+rotate)%size] = arr[j];
        
    }
    for(int j=0;j<size;j++){
        arr[j]= temp[j];
    }
    for(int k=0;k<size;k++){
        cout <<arr[k]<<" ";
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 5
Enter elements :
1
4
7
5
6
Enter rotation number :2
5 6 1 4 7 
*/