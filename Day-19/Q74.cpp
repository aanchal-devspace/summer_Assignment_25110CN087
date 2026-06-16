//Q74 Write a program to Subtract matrices

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
            c[i][j] = arr1[i][j]- arr2[i][j];

        }

    }
    cout<<"The substraction of two matrices is : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<c[i][j]<<" ";

        }

    }
    return 0;
}

/*
Output : 
Enter number of rows and columns of matrix : 1 2
Enter elements of matrix 1 and matrix 2 : 5 8 9 3
The substraction of two matrices is : -3 6 
*/