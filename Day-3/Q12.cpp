#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,max;
    cout << "Enter two numbers : " << endl;
    cin >> x>> y;
    max = (x>y) ?x:y;
    while(true){
        if(max%x ==0 && max%y == 0){
            cout << "The LCM of "<< x <<" and "<<y<<" is "<< max ;
            break ;
        }
        max ++ ;
    }    
    return 0;
}

/* Output :
Enter two numbers : 
12
20
The LCM of 12 and 20 is 60 */