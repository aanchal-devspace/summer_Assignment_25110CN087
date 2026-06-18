//Q73 Write a program to Add matrices

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column,arr1[10][10],arr2[10][10];
    cout<<"Enter number of rows and columns of matrix : ";
    cin>>row>>column;
    int c[10][10];
    
    cout<<"Enter elements of matrix 1 and matrix 2 : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr1[i][j]>>arr2[i][j];
            c[i][j]=arr1[i][j]+arr2[i][j];

        }

    }
    cout<<"The sum of two matrices is : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<c[i][j]<<" ";

        }

    }
    return 0;
}

/*
Output :
Enter number of rows and columns of matrix : 2 2
Enter elements of matrix 1 and matrix 2 : 1 4 7 8
2 5 8 6
The sum of two matrices is : 5 15 7 14 
*/