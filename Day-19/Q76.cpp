//Q76 Write a program to Find diagonal sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column,arr[10][10],sum=0;
    cout<<"Enter number of rows and columns of matrix : ";
    cin>>row>>column;
    
    if(row!=column){
        cout<<"Not valid for diagonal sum ";
    }

    else{
        cout<<"Enter elements of matrix : "<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
               cin>>arr[i][j];
               if(i==j || i+j == row-1){
                 sum+=arr[i][j];
                }


            }

        }
        cout<<"The sum of diagonal elements is : "<<sum;
    
    }
    return 0;
    
}

/*
Output : 
Enter number of rows and columns of matrix : 1 3
Not valid for diagonal sum 

Enter number of rows and columns of matrix : 2 2
Enter elements of matrix : 
4 7
9 3
The sum of diagonal elements is : 23
*/
