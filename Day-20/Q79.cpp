//Q79 Write a program to Find row-wise sum

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
    cout<<"The sum of row is :"<<endl;
    int sum;
    for(int i=0;i<row;i++){
            sum=0;
            for(int j=0;j<column;j++){
                
                sum+=arr[i][j];
                
            }
            cout<<sum<<"\n";

    }
        

    return 0;
}

/*Output : 
Enter number of rows and columns of matrix : 2 3
Enter elements of matrix :
2 5 9
3 6 4
The sum of row is :
16
13
*/