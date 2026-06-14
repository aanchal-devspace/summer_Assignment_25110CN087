//Q66 Write a program to Union of arrays.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size1,size2,a[10],b[10];
    cout<<"Enter the number of elements in array1 and array2 : ";
    cin >> size1>> size2;
    int c[size1+size2];
    cout<<"Enter elements of array1 : "<< endl;
    for(int i=0;i<size1;i++){
        cin>>a[i];

    }
    cout<<"Enter elements of array 2 : "<< endl;
    for(int i=0;i<size2;i++){
        cin >>b[i];
    }
    
    for(int i=0;i<size1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<size2;i++){
        c[size1+i]=b[i];
    }
    sort(c,c+size1+size2);
   int j=0;
    for(int k=1;k<(size1+size2);k++){
        if(c[k]!=c[j]){
            j++;
            c[j]=c[k];
        }
    }
    cout<<"The union of array is : ";
    for(int i=0;i<=j;i++){
        cout<<c[i]<<" ";
    }
    
    return 0;
}

/*
Output : 
Enter the number of elements in array1 and array2 : 3
2
Enter elements of array1 :
5
5
7
Enter elements of array 2 :
6
3
The union of array is : 5 7 6 3 
*/