//Q115 Write a program to Create menu-driven string operations system

#include<bits/stdc++.h>
using namespace std;
int main(){
    int choice;
    do{
        cout<<"\n-----String operations----- \n1. Calculate length \n2. Concatenetion \n";
        cout<<"3. String comparision\n4. Reverse string\n5. Convert case \n6. Palindrome check\n7. Exit\n";
        cout<<"Enter your choice : ";
        
        cin>>choice;
        char str1[100],str2[100],temp[100];
    
        switch(choice){
            case 1:{
                cout<<"Enter the string : ";
                cin.ignore();
                cin.getline(str1,100);
                int l;
                l = strlen(str1);
                cout<<"The length of string is : "<<l<<endl;
                break;

            }
            case 2 :{
                cout<<"Enter both strings : ";
                cin.ignore();
                cin.getline(str1,100);
                cin.getline(str2,100);
                strcpy(temp,str1);
                strcat(temp,str2);
                puts(temp);
                break;
            }
            case 3 :{
                cout<<"Enter both strings : ";
                cin.ignore();
                cin.getline(str1,100);
                cin.getline(str2,100);
                if(strcmp(str1,str2) == 0){
                    cout<<"Both strings are same\n ";
                }
                else{
                    cout<<"Different strings\n";
                }
                break;
            }
            case 4 :{
                cout<<"Enter string : ";
                cin.ignore();
                cin.getline(str1,100);
                cout<<"The reverse is : "<<strrev(str1)<<endl;
                break;
            }
            case 5 :{
                cout<<"Enter string : ";
                cin.ignore();
                cin.getline(str1,100);
                int i=0;
                for( i=0;str1[i] !='\0';i++){
                    temp[i] = toupper(str1[i]);
                    str2[i] = tolower(str1[i]);

                }
                temp[i]='\0';
                str2[i]='\0';
                cout<<"Uppercase : "; puts(temp);
                cout<<"Lowercase : "; puts(str2);
                break;

            }
            case 6 :{
                cout<<"Enter string : ";
                cin.ignore();
                cin.getline(str1,100);
                strcpy(temp,strrev(str1));
                if(strcmp(temp,str1)==0){
                    cout<<"String is palindrome \n";
                }
                else{
                    cout<<"String is not palindrome ";
                }
                break;

            }
            case 7 :{
                cout<<"Thank you \n";
                return 0;
            }
            default:{
                cout<<"Invalid choice ";
            }
        }

    }while(choice != 7);

    return 0;
}
/*
Output :

-----String operations-----
1. Calculate length
2. Concatenetion
3. String comparision
4. Reverse string
5. Convert case
6. Palindrome check
7. Exit
Enter your choice : 1
Enter the string : operations
The length of string is : 10

-----String operations-----
1. Calculate length
2. Concatenetion
3. String comparision
4. Reverse string
5. Convert case
6. Palindrome check
7. Exit
Enter your choice : 4
Enter string : reverse
The reverse is : esrever

-----String operations-----
1. Calculate length
2. Concatenetion
3. String comparision
4. Reverse string
5. Convert case
6. Palindrome check
7. Exit
Enter your choice : 6
Enter string : madam

-----String operations-----
1. Calculate length
2. Concatenetion
3. String comparision
4. Reverse string
5. Convert case
6. Palindrome check
7. Exit
Enter your choice : 5
Enter string : string
Uppercase : STRING
Lowercase : string
String is palindrome

-----String operations-----
1. Calculate length
2. Concatenetion
3. String comparision
4. Reverse string
5. Convert case
6. Palindrome check
7. Exit
Enter your choice : 7
Thank you 
*/