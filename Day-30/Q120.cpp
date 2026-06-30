//Q120 Write a program to Develop complete mini project using arrays, strings and functions

#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    int totalClasses;
    int present;
    bool exist;
};

Student s[100];
int scount = 0;

void saveFile()
{
    ofstream fout("attendance.dat", ios::binary);

    fout.write((char *)&scount, sizeof(scount));
    fout.write((char *)s, sizeof(s));

    fout.close();
}

void loadFile()
{
    ifstream fin("attendance.dat", ios::binary);

    if(fin)
    {
        fin.read((char *)&scount, sizeof(scount));
        fin.read((char *)s, sizeof(s));
    }

    fin.close();
}

void add()
{
    cout<<"\nEnter Roll Number : ";
    cin>>s[scount].roll;

    cin.ignore();

    cout<<"Enter Name : ";
    cin.getline(s[scount].name,50);

    s[scount].present=0;
    s[scount].totalClasses=0;
    s[scount].exist=true;

    scount++;

    saveFile();

    cout<<"\nStudent Added Successfully.\n";
}

void view()
{
    cout<<"\n------STUDENT LIST------\n";

    for(int i=0;i<scount;i++)
    {
        if(s[i].exist)
        {
            cout<<"\nRoll : "<<s[i].roll;
            cout<<"\nName : "<<s[i].name;
            cout<<"\nPresent : "<<s[i].present;
            cout<<"\nTotal Classes : "<<s[i].totalClasses;
            cout<<'\n';
        }
    }
}

void search()
{
    int roll;

    cout<<"\nEnter Roll Number : ";
    cin>>roll;

    for(int i=0;i<scount;i++)
    {
        if(s[i].roll==roll && s[i].exist)
        {
            cout<<"\nStudent Found\n";

            cout<<"Roll : "<<s[i].roll<<endl;
            cout<<"Name : "<<s[i].name<<endl;
            cout<<"Present : "<<s[i].present<<endl;
            cout<<"Total Classes : "<<s[i].totalClasses<<endl;

            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}
void edit()
{
    int roll;

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    for(int i=0;i<scount;i++)
    {
        if(s[i].roll==roll && s[i].exist)
        {
            cin.ignore();

            cout<<"Enter New Name : ";
            cin.getline(s[i].name,50);

            saveFile();

            cout<<"\nStudent Updated Successfully.\n";
            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}
void Attendance()
{
    if(scount==0)
    {
        cout<<"\nNo Students Available.\n";
        return;
    }

    char ch;

    cout<<"\n------MARK ATTENDANCE------\n";

    for(int i=0;i<scount;i++)
    {
        if(s[i].exist)
        {
            cout<<"\nRoll : "<<s[i].roll;
            cout<<"\nName : "<<s[i].name;
            cout<<"\nPresent (P) / Absent (A) : ";
            cin>>ch;

            s[i].totalClasses++;

            if(ch=='P' || ch=='p')
                s[i].present++;
        }
    }

    saveFile();

    cout<<"\nAttendance Saved Successfully.\n";
}
void attendanceReport()
{
    float per;

    cout<<"\n------ATTENDANCE REPORT------\n";

    for(int i=0;i<scount;i++)
    {
        if(s[i].exist)
        {
            if(s[i].totalClasses==0)
                per=0;
            else
                per=(float)s[i].present*100/s[i].totalClasses;

            cout<<"\nRoll : "<<s[i].roll;
            cout<<"\nName : "<<s[i].name;
            cout<<"\nPresent : "<<s[i].present;
            cout<<"\nTotal Classes : "<<s[i].totalClasses;
            cout<<"\nPercentage : "<<per<<" %";
            cout<<"\n";
        }
    }
}
void below75()
{
    float per;
    bool found=false;

    cout<<"\n------BELOW 75%------\n";

    for(int i=0;i<scount;i++)
    {
        if(s[i].exist)
        {
            if(s[i].totalClasses==0)
                per=0;
            else
                per=(float)s[i].present*100/s[i].totalClasses;

            if(per<75)
            {
                found=true;

                cout<<"\nRoll : "<<s[i].roll;
                cout<<"\nName : "<<s[i].name;
                cout<<"\nAttendance : "<<per<<" %";
                cout<<"\n";
            }
        }
    }

    if(!found)
        cout<<"\nNo Student Below 75%.\n";
}
void deletestudent()
{
    int roll;

    cout<<"\nEnter Roll Number : ";
    cin>>roll;

    for(int i=0;i<scount;i++)
    {
        if(s[i].roll==roll && s[i].exist)
        {
            s[i].exist=false;

            saveFile();

            cout<<"\nStudent Deleted Successfully.\n";
            return;
        }
    }

    cout<<"\nStudent Not Found.\n";
}
int main()
{
    loadFile();

    int choice;

    do
    {
        cout << "\n\n------ SMART ATTENDANCE SYSTEM ------\n";
        cout << "1. Add Student\n"<<"2. View Students\n"<< "3. Search Student\n"<< "4. Edit Student\n";
        cout << "5. Mark Attendance\n"<< "6. Attendance Report\n"<< "7. Students Below 75%\n"<< "8. Delete Student\n";
        cout << "9. Exit\n";
        

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                view();
                break;

            case 3:
                search();
                break;

            case 4:
                edit();
                break;

            case 5:
                Attendance();
                break;

            case 6:
                attendanceReport();
                break;

            case 7:
                below75();
                break;

            case 8:
                deletestudent();
                break;

            case 9:
                saveFile();
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 9);

    return 0;
}