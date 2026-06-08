//Q43 Write a program to Write function to check prime

#include<bits/stdc++.h>
using namespace std;
int prime(int num){
    int count =0;
    for(int i=1;i<=num;i++){
        int x=i;
        if(num%x==0){
            count ++;
        }

    }
    if(count ==2){
        cout<<"Prime";
    }
    else
    cout <<"Not prime";

    return 0;
    

}
int main(){
    int n;
    cout<< "Enter a number : ";
    cin >>n;
    prime(n);

    return 0;
}

/*
Output :
Enter a number : 13
Prime
*/