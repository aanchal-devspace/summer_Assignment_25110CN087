//Q56 Write a program to Find duplicates in array

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
    
    for(int j=0;j<size;j++){
        int count = 0;
        for(int k=j;k<size;k++){
            if(arr[j]== arr[k])
            count ++;
        }
        if(count>1){
            cout<<arr[j]<< " appeared "<< count <<" times "<< endl;
        }
    }
    return 0;
}

/*
Output :
Enter the number of elements in array : 5
Enter elements :
4
4
7
7
1
4 appeared 2 times
7 appeared 2 times 
*/