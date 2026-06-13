//Q62 Write a program to Find maximum frequency element

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
    int max=INT_MIN,ele=0;
    for(int j=0;j<size;j++){
        int count =0;
        for(int k=0;k<size;k++){
            if(arr[j]==arr[k])
            count++;

        }
        if(count > max){
           max= count ;
           ele=arr[j];
        }

    }
    cout<<"The maximum frequency element is "<< ele<< " with frequency of "<<max;;
    return 0;
}

/*
Output :
Enter the number of elements in array : 5
Enter elements :
9
6
7
9
9
The maximum frequency element is 9 with frequency of 3
*/