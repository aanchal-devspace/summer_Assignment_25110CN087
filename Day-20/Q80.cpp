//Q80 Write a program to Find column-wise sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column,arr[10][10];
    cout<<"Enter number of rows and columns of matrix : ";
    cin>>row>>column;
    
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];

        }

    }
    cout<<"The sum of column is :"<<endl;
    int sum;
    for(int i=0;i<row;i++){
            sum=0;
            for(int j=0;j<column;j++){
                
                sum+=arr[j][i];
                
            }
            cout<<sum<<" ";

    }
        

    return 0;
}

/*
Output : 
Enter number of rows and columns of matrix : 2 2
Enter elements of matrix :
5 6
8 2
The sum of column is :
13 8
*/