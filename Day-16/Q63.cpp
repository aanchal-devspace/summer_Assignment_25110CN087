//Q63 Write a program to Find pair with given sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10];
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Enter the sum : ";
    int sum;
    cin >> sum;
    for(int j=0;j<size;j++){
        for(int k=0;k<size;k++){
            if(j!=k){
               if(arr[j]+arr[k]==sum)
               cout<<arr[j]<< " ";
            }

        }
    }
    return 0;
}

/*
Output : 
Enter the number of elements in array : 3
Enter elements :
4
7
1
Enter the sum : 8
7 1 
*/