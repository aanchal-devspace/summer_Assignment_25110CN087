//Q75 Write a program to Transpose matrix

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column,arr[10][10];
    cout<<"Enter number of rows and columns of matrix : ";
    cin>>row>>column;
    
    cout<<"Enter elements of matrix : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];

        }

    }
    cout<<"The transpose of matrix is : ";
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";

        }

    }
    return 0;
}

/*
Output : 
Enter number of rows and columns of matrix : 2 2
Enter elements of matrix : 4 6 8 3
The transpose of matrix is : 4 6 8 3 
*/