//Q50 Write a program to Find sum and average of array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10],sum=0;
    float avg;
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg = float(sum)/size; 
    cout<<"The sum of all elements of array is "<< sum << endl;
    cout <<"The average of elements is "<< avg;

    return 0;
}

/*
Output : 
Enter the number of elements in array : 5
Enter elements : 2
5
8
5
2
The sum of all elements of array is 22
The average of elements is 4.4
*/