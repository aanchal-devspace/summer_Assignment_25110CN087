//Q67 Write a program to Intersection of arrays.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[10],arr2[10],size1,size2;
    cout<<"Enter number of elements is both arrays : ";
    cin>>size1>>size2;
    cout<<"Enter elements of array 1 : ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 2 : ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int large= max(size1,size2);
    cout<<"Intersection of both array is : ";
    for(int i=0;i<large;i++){
        for(int j=0;j<large;j++){
            if(arr1[i]==arr2[j])
            cout<<arr1[i]<<" ";

        }
    }
    return 0;
}

/*
Output :
Enter number of elements is both arrays : 2
3
Enter elements of array 1 : 3
2
Enter elements of array 2 : 1
2
3
Intersection of both array is : 3 2 

Enter number of elements is both arrays : 3
2
Enter elements of array 1 : 1
2
3
Enter elements of array 2 : 3
2
Intersection of both array is : 2 3 
*/