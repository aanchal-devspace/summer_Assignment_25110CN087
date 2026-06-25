//Q108 Write a program to Create marksheet generation system

#include<bits/stdc++.h>
using namespace std;
struct mark{
    int id;
    char name[100];
    int rollno;
    int marks[5];
}m;
int main(){
    cout<<"Enter your student Id ,roll no. and name respectively : ";
    cin>>m.id;
    cin>>m.rollno;
    cin.getline(m.name,100);
    

    int arr[5],sum=0;
    cout<<"Enter marks of English , Physics, chemistry, Maths and programming respectively "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i] >=0 && arr[i]<=100){
            sum+=arr[i];
        }
        else{
            cout<<"Invalid marks ";
            return 0;
        }
        
    }
    float per;
    char grade;
    string status;
    per = sum/5.0;
    if(per <= 100 && per>=90){
        grade = 'A';
        status = "Pass";
    }   
    else if(per < 90 && per>=80){
        grade = 'B';
        status = "Pass";
    }
    else if(per < 80 && per>=70){
        grade = 'C';
        status = "Pass";
    }  
    else if(per < 70 && per>=60){
        grade = 'D';
        status = "Pass";
    }
    else if(per < 60 && per>=50){
        grade = 'E';
        status = "Pass";
    }
    else{
        grade = 'F';
        status = "Fail";
    }
    cout<<"--------MARKSHEET--------\n"<<endl;
    cout<<"Student Id : "<<m.id<<"\nSudent name : "<<m.name<<"\nStudent roll no : "<<m.rollno<<endl;
    cout<<'\n';
    cout<<"English     : "<<arr[0]<<"\nPhysics     : "<<arr[1]<<"\nChemistry   : "<<arr[2]<<"\nMaths       : "<<arr[3]<<"\nProgramming : "<<arr[4]<<endl;
    cout<<"\n";
    cout<<"Marks   : "<<sum <<"\nPercent : "<<per<<"\nGrades  : "<<grade<<"\nStatus  : "<<status ;       
    
    return 0;
}

/*
Output :
Enter your student Id ,roll no. and name respectively : 25110 17 aanchal singh
Enter marks of English , Physics, chemistry, Maths and programming respectively 
91 76 88 75 94
--------MARKSHEET--------

Student Id : 25110
Sudent name :  aanchal singh
Student roll no : 17

English     : 91
Physics     : 76
Chemistry   : 88
Maths       : 75
Programming : 94

Marks   : 424
Percent : 84.8
Grades  : B
Status  : Pass
*/