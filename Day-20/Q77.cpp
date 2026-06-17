//Q77 Write a program to Multiply matrices

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,r2,c2,c1,arr1[10][10],arr2[10][10];
    cout<<"Enter number of rows and columns of both matrix respectively : ";
    cin>>r1>>c1>>r2>>c2;
    int c[10][10];
    
    
    if(r2!=c1){
        cout<<"Multiplication not possible : ";
    }
    else{
        cout<<"Enter elements of matrix 1 : "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
               cin>>arr1[i][j];

            }

        }
        cout<<"Enter elements of matrix 2 : "<<endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
               cin>>arr2[i][j];

            }

        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<r1;k++){
                    c[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"The resultant matrix is : "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
               cout<<c[i][j]<<" ";

            }
            cout <<"\n";

        }
    }
    return 0;
}

/*Output :
Enter number of rows and columns of both matrix respectively : 2 3 3 2
Enter elements of matrix 1 :
2 6 4
3 4 1
Enter elements of matrix 2 :
7 2
9 1
1 6
The resultant matrix is : 
68 10
57 10 
*/