// Q49 Write a program to Input and display array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,arr[10];
    cout<<"Enter number of elements in array : ";
    cin >> num;
    cout<<"Enter elements of array : "<< endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
       
    }
    cout<<"The elements in array is : "<<endl;
    for(int i=0;i<num;i++){
        cout << arr[i]<<" ";
       
    }
    return 0;
}

/*
Output : 
Enter elements of array :
1
4
7
8
The elements in array is :
1 4 7 8 
*/