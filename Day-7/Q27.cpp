//Q27 Write a program to Recursive sum of digits

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
  if(n==0)
  return 0;
  else
   return n%10+sum(n/10);
}
int main(){
    int n;
    cout<< "Enter a number : ";
    cin >>n;
    cout<<"The sum of digits is "<<sum(n);
    return 0;
}

/*Output : 
Enter a number : 875
The sum of digits is 20 */