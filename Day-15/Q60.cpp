//Q60 Write a program to Move zeroes to end

#include<bits/stdc++.h>
using namespace std;

int main() {
    int size,arr[100];
    cout<<"Enter number of elements in array : ";
    cin >> size;


    for(int i = 0;i<size;i++) {
        cin >> arr[i];
    }

    int j = 0;
    for(int i =0;i<size;i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output : 
Enter number of elements in array : 4
5
0
0
9
5 9 0 0 
*/