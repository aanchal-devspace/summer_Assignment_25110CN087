//Q53 Write a program to Linear search

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
    cout<<"Enter the elements to search : ";
    cin >> ele;
    int loc=-1;
    for(int j=0;j<size;j++){
        if(arr[j] == ele ){
            loc = j;
            break;
        }
    }
    if(loc = -1){
        cout<<"Element not found ";

    }
    else{
        cout <<"Element found at "<< loc ;
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 3
Enter elements :
1
4
5
Enter the elements to search : 6
Element not found 
*/