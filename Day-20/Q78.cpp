//Q78 Write a program to Check symmetric matrix

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column,arr[10][10],count =0;
    cout<<"Enter number of rows and columns of matrix : ";
    cin>>row>>column;
    
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];

        }

    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==arr[j][i]){
                count++;
            }
        
        }

    }
    if(count == row*column)
    cout<<"Matrix is symmetric ";
    else
    cout<<"Matrix is assymmetric ";

    return 0;
}

/*
Output :
Enter number of rows and columns of matrix : 2 2
Enter elements of matrix :
2 3
3 5
Matrix is symmetric 
*/