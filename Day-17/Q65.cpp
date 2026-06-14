//Q65 Write a program to Merge arrays

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size1,size2,a[10],b[10],c[10];
    cout<<"Enter the number of elements in array 1 and array2 : ";
    cin >> size1>> size2;
    cout<<"Enter elements of array1 : "<< endl;
    for(int i=0;i<size1;i++){
        cin>>a[i];

    }
    cout<<"Enter elements of array 2 : "<< endl;
    for(int i=0;i<size2;i++){
        cin >>b[i];
    }
    cout<<"The merged array is : ";
    
    for(int i=0;i<size1;i++){
        c[i]=a[i];
        cout<<c[i]<<" ";
    }
    for(int i=0;i<size2;i++){
        c[size1+i]=b[i];
        cout<<c[size1+i]<<" ";
    }
    
    return 0;
}

/*
Output : 
Enter the number of elements in array 1 and array2 : 2
2
Enter elements of array1 :
5
6
Enter elements of array 2 :
8
5
The merged array is : 5 6 8 5 
*/