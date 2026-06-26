//Q114 Write a program to Create menu-driven array operations system

#include<bits/stdc++.h>
using namespace std;
struct sarray{
    int b;
    bool exist;
};
int main(){
    int choice,num=0,temp=0;
    bool exist;
    int curr=0;
    sarray arr[50];
    for(int i=0;i<50;i++){
        arr[i].b = 0;
        arr[i].exist = false;

    }

    ifstream fin("sarray.dat",ios::binary);
    if(fin){
      fin.read((char*)arr,sizeof(arr));
      fin.close();
    }
   
    
    for (int i = 0; i < 50; i++)
    {
        if (arr[i].exist)
            curr++;
    }
   

    do{
        cout<<"\n-------- MAIN MENU --------\n1. Create Array\n2. Display Array\n3. Insert Element";
        cout <<"\n4. Delete Element\n5. Search Element\n6. Sort Array\n7. Exit\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1 :{
            cout<<"Enter number of elements : ";
            cin>>num;
            if(num>50) num=50;
            cout<<"Enter elements : ";
            
            for(int i=0;i<num;i++){
                cin>>arr[i].b;
                arr[i].exist = true;
            }
            curr = num;
            ofstream fout("sarray.dat",ios::binary);
            fout.write((char*)arr,sizeof(arr));
            fout.close();
            cout<<"Array created \n";
            break;

        }
        case 2:{
            if(curr ==0 ) {
                cout<<"Empty array \n";
            }
            for(int i=0;i<curr;i++){
                if(arr[i].exist){
                 cout<<arr[i].b<<" ";
                }
            }
            break;
        }
        case 3:{
            if(curr>=50){
                cout<<"Array overflow, can't insert ";
                break;
            }
            cout<<"Enter element : ";
            cin>>arr[curr].b;
            arr[curr].exist = true;
            curr++;
            ofstream fout("sarray.dat",ios::binary);
            fout.write((char*)arr,sizeof(arr));
            fout.close();
            cout<<"Element added succesfully\n ";
            break;
        }
        case 4 :{
            int pos =-1;
            cout<<"Enter element : ";
            cin>>temp;
            for(int i=0;i<curr;i++){
                if(arr[i].b == temp){
                    pos=i;
                    break;
                }
            }
            if(pos == -1){
                cout<<"Element not exist \n";
            }
            for(int i=pos;i<curr-1;i++){
                arr[i].b = arr[i+1].b;
                arr[i].exist = arr[i+1].exist;
            }
            curr--;
            arr[curr].exist = false;
            ofstream fout("sarray.dat",ios::binary);
            fout.write((char*)arr,sizeof(arr));
            fout.close();
            cout<<"Element deleted\n";
            break;
        }
        case 5 :{
            bool found= false;
            cout<<"Enter element : ";
            cin>>temp;
            for(int i=0;i<curr;i++){
                if(arr[i].exist && arr[i].b == temp){
                    cout<<"Element found at index : "<<i;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout<<"Element not found\n";
            }
            break;

        }
        case 6 :{
            int t;
            for(int i=0;i<curr-1;i++){
                if(arr[i].exist){
                    for(int j=i;j<curr-i-1;j++){
                       if(arr[j].b > arr[j+1].b){
                          swap(arr[j].b,arr[j+1].b);
                        }
                    }
                }
            }
            cout<<"The sorted array is : ";
            for(int i=0;i<curr;i++){
                if(arr[i].exist){
                    
                    cout<<arr[i].b<<" ";
                }
            }
            ofstream fout("sarray.dat",ios::binary);
            fout.write((char*)arr,sizeof(arr));
            fout.close();
            break;
        }
        case 7 :{
            cout <<"Thank you ";
            return 0;
        }
        
        default:
         cout<<"Invalid choice";
            break;
        }


    }while(choice !=7);
    return 0;
}
/*
Output :
-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 2
Empty array 

-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 1
Enter number of elements : 5
Enter elements : 2
3 6 4 9  
Array created 

-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 5
Enter element : 4
Element found at index : 3
-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 6
The sorted array is : 2 3 4 6 9 
-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 2
2 3 4 6 9 
-------- MAIN MENU --------
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Search Element
6. Sort Array
7. Exit
Enter your choice: 7
Thank you 
*/