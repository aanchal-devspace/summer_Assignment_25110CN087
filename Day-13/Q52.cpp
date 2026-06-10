//Q52 Write a program to Count even and odd elements

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, arr[10],count_even =0, count_odd =0;
    cout<<"Enter number of elements in array : ";
    cin >> num;
    cout<<"Enter elements of array : "<< endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
        if(arr[i]%2 == 0){
            count_even ++;
        }
        else{
            count_odd++;
        }
       
    }
    cout<<"The number of even elements is "<< count_even << " and odd elements is "<< count_odd<< endl;
    return 0;
}

/*
Output : 
Enter number of elements in array : 5
Enter elements of array :
1
4
5
9
8
The number of even elements is 2 and odd elements is 3
*/