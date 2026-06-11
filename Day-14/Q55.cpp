//Q55 Write a program to Second largest element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10];
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    int large = INT_MIN;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if(arr[i]> large)
        large = arr[i];

    }
    int second_large = INT_MIN;
    for(int k=0;k<size;k++){
        if(arr[k]== large)
        continue;
        else if (arr[k]>second_large)
        second_large = arr[k];
        
    }
    cout <<"The second largest element is "<< second_large;

    return 0;
}

/*
Output : 
Enter the number of elements in array : 4
Enter elements :
8
5
9
2
The second largest element is 8
*/