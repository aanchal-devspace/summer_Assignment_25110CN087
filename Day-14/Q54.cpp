//Q54 Write a program to Frequency of an element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,arr[10],ele;
    cout<<"Enter the number of elements in array : ";
    cin >> size;
    cout<<"Enter elements : "<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Enter the element : ";
    cin >> ele;
    int count =0;
    for(int j=0;j<size;j++){
        if(arr[j] == ele ){
            count ++;
            
        }
    }
    cout<<"The frequency of "<< ele<<" is "<< count ;
    return 0;
}

/*
Output : 
Enter the number of elements in array : 5
Enter elements :
1
4
4
2
3
Enter the element : 4
The frequency of 4 is 2
*/