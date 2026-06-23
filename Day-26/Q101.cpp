// Q101 Write a program to Create number guessing game

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the range : ";
    int start,end;
    cin>>start>>end;
    int number,guess;
    srand(time(0));
    number = start + rand()%(end - start +1);

    cout<<"make a guess (you only have 3 attempts ) : ";
    cin>>guess; 
    
    for(int i=3;i!=0;i--){
        if(number == guess){
            cout<<"congrats ! you guessed it right ";
            return 0;
        }
        else{
            if(guess>number){
                cout<<"Guessed too high (Try again) "<<'\n' << (i-1)<<" attempt left "<<endl;
            }
            else{
                cout<<"Guessed too low (Try again) "<<'\n' << (i-1)<<" attempt left "<<endl;
            }
            
            if(i>1){
                cout<<"make another guess : ";
                cin>>guess;
            }
        }
    }
    return 0;
}

/*
Output :
Enter the range : 1 99
make a guess (you only have 3 attempts ) : 65
Guessed too low (Try again)
2 attempt left
make another guess : 78
Guessed too low (Try again)
1 attempt left 
make another guess : 82
congrats ! you guessed it right 
*/
