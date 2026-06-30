//Q118 Write a program to Create mini library system
#include<bits/stdc++.h>
using namespace std;
struct book{
    int id;
    char title[100];
    char author[100];
    bool issued = false;
};
int main(){
    book b[20] = {
        {26112,"Clean code","Robert martin"},
        {26113,"Refactoring","Martin fowler et al"}
    };
    cout<<"1. Add a book\n"<<"2. View all books\n"<<"3. Search a book \n"<<"4. Issue a book\n"<<"5. Return a book\n"<<"6. Delete a book\n";
    cout<<'\n';
    cout<<"Enter your choice : ";
    int choice,curr =2;
    cin>>choice;
    switch(choice){
        case 1 :{
            cout<<"Enter number of books to add : ";
            int num;
            cin>>num;
            
            for(int i=curr;i<num+2;i++){
                cout<<"Enter id of book : ";
                cin>>b[i].id;
                cout<<"Enter title of book : ";
                cin.ignore();
                cin.getline(b[i].title,100);
                cout<<"Enter name of author : ";
                cin.ignore();
                cin.getline(b[i].author,100);

            }
            curr+=num;
            cout<<"Book added successfully ";
            break;

        }

        case 2 :{
            for(int i=0;i<curr;i++){
                cout<<b[i].id<<" ";
                cout<<b[i].title<<" ";
                cout<<b[i].author<<endl ;
                cout<<(b[i].issued ? "Issued" : "Available")<<endl;
            }
            break;
        }
        
        case 3 :{
            cout<<"Enter the id of book : ";
            int num,pos = -1;
            cin>>num;
            for(int i=0;i<curr;i++){
                if(num == b[i].id){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                cout<<"Invalid id"<<endl;
            }
            else{
                cout<<b[pos].id<<'\n'<<b[pos].title<<'\n'<<b[pos].author<<endl;
            }
            break;
        }

        case 4 : {
            cout<<"Enter id of the book ";
            int num;
            cin>>num;
            for(int i=0;i<curr;i++){
                if(num == b[i].id){
                    if(!b[i].issued){
                        b[i].issued = true;
                        cout<<"Book issued successfully"<<endl;
                        return 0;
                    }
                    
                    
                }
                
            }

            cout<<"Records not found ";
            
            break;
        }

        case 5 : {
            cout<<"Enter id of the book : ";
            int num;
            cin>>num;
            for(int i=0;i<curr ;i++){
                if(num == b[i].id){
                    if(b[i].issued){
                        b[i].issued = false ;
                        cout<<"Book returned succesfully"<<endl;
                        return 0;
                    }
                    
                }
                
            }
            cout<<"Records not found";
                
            
            break;
        }

        case 6 :{
            cout<<"Enter book id : ";
          int r,posi = -1;
          cin>>r;
          for(int i=0;i<curr;i++){
              if(b[i].id == r){
                  posi = i;
                  break;
                }
            }
          if(posi == -1){
              cout<<"Book not found ";
            }
          else{
              for(int i=posi;i<curr-1;i++){
                  b[i] = b[i+1] ;
                }
                curr--;
                cout<<"Records deleted successfully ";
            }
            break;
        }

        
    }

    return 0;
}


/*
Output:
1. Add a book
2. View all books
3. Search a book
4. Issue a book
5. Return a book
6. Delete a book

Enter your choice : 1
Enter number of books to add : 1
Enter id of book : 101
Enter title of book : xyz
Enter name of author : abc
Book added successfully 

Enter your choice : 2
26112 Clean code Robert martin
Available
26113 Refactoring Martin fowler et al
Available

Enter your choice : 3
Enter the id of book : 26113
26113
Refactoring
Martin fowler et al

Enter your choice : 4
Enter id of the book 26112
Book issued successfully

Enter your choice : 5
Enter id of the book : 21452
Records not found

Enter your choice : 6
Enter book id : 26112
Records deleted successfully 
*/