#include<bits/stdc++.h>
using namespace std;
struct student{
        int rollNo ;
        char name[100];
        float percent ;
};
int main(){
    student s[100] = {
        {1 ,"Amit",89},
        {2,"Bindu",74}

    };
    
    cout<<"1. Display students \n"<<"2. Add student \n"<<"3. Search student \n"<<"4. Delete student\n"<<endl;
    int choice,curr =2;
    cin>>choice;
    cout<<'\n';
    switch(choice){
        case 2 :
        cout<<"Enter number of student you want to add : ";
        int number;
        cin>>number;
        for(int i=curr;i<curr+number;i++){
            cout<<"Enter roll no. : ";
            cin>>s[i].rollNo ;
            cout<<"Enter name : ";
            cin>>s[i].name ;
            cout<<"Enter percent : ";
            cin>>s[i].percent;

        }
        curr+= number;
        cout<<"Record added successfully ";
        break;

        case 1 :
        cout<<"Roll no. "<<"Name "<<"Percent "<<endl;
        for(int i=0;i<curr;i++){
    
            cout<<s[i].rollNo <<" "<<s[i].name<<" "<<s[i].percent<<endl;

        }
        break;
        
        case 3 :
        cout<<"Enter roll No of student : ";
        int R;
        cin>>R;
        for(int i=0;i<curr;i++){
            if(s[i].rollNo == R){
                cout<<"Roll no. "<<"Name "<<"Percent "<<endl;
                cout<<s[i].rollNo <<" "<<s[i].name<<" "<<s[i].percent<<endl;
                break;
            }
            
        }
        break;

        case 4 :
        cout<<"Enter rollNo. : ";
        int r,pos = -1;
        cin>>r;
        for(int i=0;i<curr;i++){
            if(s[i].rollNo == r){
                pos = i;
                break;
            }
        }
        if(pos == -1){
            cout<<"Roll no. not found ";
        }
        else{
            for(int i=pos;i<curr-1;i++){
                s[i] = s[i+1] ;
            }
            curr--;
            cout<<"Records deleted successfully ";
        }
        break;

        
    }
    return 0;

}

/*
Output :
1. Display students 
2. Add student 
3. Search student 
4. Delete student

1

Roll no. Name Percent
1 Amit 89
2 Bindu 74

2


Enter number of student you want to add : 2
Enter roll no. : 12
Enter name : Cheeku
Enter percent : 90
Enter roll no. : 32
Enter name : Sonam
Enter percent : 68
Record added successfully


3

Enter roll No of student : 2
Roll no. Name Percent
2 Bindu 74

4

Enter rollNo. : 2
Records deleted successfully 

*/