//Q28 Write a program to Recursive reverse number

#include<bits/stdc++.h>
using namespace std;
int rev =0;
int reverse(int m){
    
    if(m==0){
        return 0;
    }
    else{
        rev=rev*10 + m%10;
        reverse(m/10);
        return(rev );
    }

}
int main(){
    int m;
    cout<<"Enter a number : ";
    cin >> m;
    cout<<"the reverse of "<< m<<" is "<< reverse(m);
    return 0;
}

/*Output : 
Enter a number : 954
the reverse of 954 is 459 */