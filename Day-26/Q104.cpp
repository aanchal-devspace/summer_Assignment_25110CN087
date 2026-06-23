//Q104 Write a program to Create quiz application

#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[10];
    int count=0;
    cout<<"1. Which operator is used to compare two values for equality in C++?" <<endl;
    cout << "a. ="<<'\n'<< "b. =="<<'\n'<<"c. !="<<'\n'<<"d. <="<<endl;
    cout<<"Enter your choice : ";
    cin>>arr[0];
    if(arr[0] == 'b') count++;
    cout<<'\n';

    cout<<"2. Which loop is guaranteed to execute at least once?"<<endl;
    cout<< "a. for"<<'\n'<<"b. while"<<'\n'<<"c. do while"<<'\n'<<"d. none"<<endl;
    cout<<"Enter your choice : ";
    cin>>arr[1];
    if(arr[1] == 'c') count++;
    cout<<'\n';

    cout<<"1. Which symbol is used to end a statement in C++?"<<endl;
    cout<< "a. :"<<'\n'<<"b. ;"<<'\n'<<"c. ,"<<'\n'<<"d. ."<<endl;
    cout<<"Enter your choice : ";
    cin>>arr[2];
    if(arr[2] == 'b') count++;
    cout<<'\n';

    cout<<"Your score is : "<< count<<"/3"<<endl;
    cout <<"Correct answers are : "<<" b"<< " c"<<" b"<<endl;
    cout<<"Your answers are : "<<arr[0] <<" "<<arr[1]<<" "<<arr[2];

    return 0;
}

/*
Output :

1. Which operator is used to compare two values for equality in C++?
a. =
b. ==
c. !=
d. <=
Enter your choice : b

2. Which loop is guaranteed to execute at least once?
a. for
b. while
c. do while
d. none
Enter your choice : b

1. Which symbol is used to end a statement in C++?
a. :
b. ;
c. ,
d. .
Enter your choice : b

Your score is : 2/3
Correct answers are :  b c b
Your answers are : b b b

*/