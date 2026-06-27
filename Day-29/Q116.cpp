//Q116 Write a program to Create inventory management system

#include<bits/stdc++.h>
using namespace std;
struct inven{
    int id;
    int quantity;
    char name[100];
    int price;
    bool exist;
};
int main(){
    inven m[20] ={
        {101,20,"Laptops",45000,true},
        {102,10,"Mouse",700,true},
        {103,50,"Chargers",1200,true}
    } ;
    int choice,curr=3;
    ifstream fin("inventory.dat",ios::binary);
    if(fin){
       fin.read((char*)m,sizeof(m));
       fin.close();
    }

    for(int i=3;i<20;i++){
        m[i].id = 101+i;
        m[i].quantity = 0;
        strcpy(m[i].name,"");
        m[i].price = 0;
        m[i].exist = false;
    }
    do{
        cout<<"\n------Inventory management system------\n1. Add New Product\n2. View All Products\n";
        cout<<"3. Sell Product\n4. Restock Product \n5. Search Product\n6. Low Stock Alerts\n7. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                int num;
                bool found = false;
                
                cout<<"How much products you want to enter(should be less than "<<20-curr<<"): ";
                cin>>num;
                if(curr+num > 20){
                    cout<<"Inventory full\n";
                }
                for(int i=curr;i<curr+num;i++){
                    bool found = false;
                    cout<<"Enter product name : ";
                    cin.ignore();
                    cin.getline(m[i].name,100);
                    for(int j=0;j<curr;j++){
                        if(strcmp(m[i].name,m[j].name) ==0){
                            cout<<"Product already exist \n";
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        cout<<"Enter price of product : ";
                        cin>>m[i].price;
                        cout<<"Enter quantity of product : ";
                        cin>>m[i].quantity;
                        m[i].exist = true;
                    }
                    
                }
                for(int i=0;i<curr+num;i++){
                    if(m[i].exist){
                        curr++;
                    }
                }
                ofstream fout("inventory.dat",ios::binary);
                fout.write((char*)m,sizeof(m));
                fout.close();
                if(!found){
                  cout<<"Product/s added successfully\n ";
                }
                break;

            }
            case 2:{
                for(int i=0;i<curr;i++){
                    if(m[i].exist){
                        cout<<"Id       : "<< m[i].id <<"\n"<<"Name     : " <<m[i].name <<"\n";
                        cout<<"Price    : "<< m[i].price<<"\n"<<"Quantity : "<<m[i].quantity <<"\n\n";
                        
                    }
                }
                break;

            }
            case 3 :{
                char temp[100];
                int pos;
                bool found = false;
                cout<<"Enter product name : ";
                cin.ignore();
                cin.getline(temp,100);
                cout<<"\n";
                cout<<"Enter quantity : ";
                cin>>pos;
                for(int i=0;i<curr;i++){
                    if(m[i].exist && strcmp(m[i].name,temp)==0 && m[i].quantity >= pos){                        
                       m[i].quantity -= pos;
                       found = true;
                        break;
                    }
                }
                if(found){
                    ofstream fout("inventory.dat",ios::binary);
                    fout.write((char*)m,sizeof(m));
                    fout.close();
                    cout<<"Product sold\n";
                }
                else{
                    cout<<"Product not found or not of enough quantity\n";
                }
                break;
            }
            case 4 :{
                char temp[100];
                int pos;
                bool found = false;
                cout<<"Enter product name : ";
                cin.ignore();
                cin.getline(temp,100);
                cout<<"Enter quantity : ";
                cin>>pos;
                for(int i=0;i<curr;i++){
                    if(m[i].exist && strcmp(m[i].name,temp)==0){                        
                       m[i].quantity += pos;
                       found = true;
                        break;
                    }
                }
                if(found){
                    ofstream fout("inventory.dat",ios::binary);
                    fout.write((char*)m,sizeof(m));
                    fout.close();
                    cout<<"Product restocked\n";
                }
                else{
                    cout<<"Product not found\n";
                }
                break;
            }
            case 5 :{
                char temp[100];
                bool found = false;
                cout<<"Enter product name : ";
                cin.ignore();
                cin.getline(temp,100);
                for(int i=0;i<curr;i++){
                    if(m[i].exist && strcmp(m[i].name, temp )==0){
                        found = true;
                        cout<<"Id       : "<< m[i].id <<"\n"<<"Name     : " <<m[i].name <<"\n";
                        cout<<"Price    : "<< m[i].price<<"\n"<<"Quantity : "<<m[i].quantity <<"\n\n";
                        break;
                        
                    }
                }
                if(!found){
                    cout<<"Product not found try another \n";
                }
                break;
            }
            case 6 :{
                for(int i=0;i<curr;i++){
                    if(m[i].exist && m[i].quantity<=5){
                        cout<<"Current stock of "<<m[i].name<<" is : " <<m[i].quantity;
                        cout<<"\nLow stock ! Restock immediatly\n";
                        
                    }
                }
                break;
            }
            case 7 :{
                cout<<"Thank you \n";
                return 0;
            }
            default:{
                cout<<"Invalid choice \n";
                break;

            }

        }


    }while( choice != 7);

    return 0;
}