// Q112 Write a program to Create contact management system

#include <bits/stdc++.h>
using namespace std;
struct contact
{
    char name[100];
    long long num;
    char mail[100];
    bool exist;
};
int main()
{

    contact c[10];
    ifstream fin("contact.dat", ios::binary);
    if (fin)
    {
        fin.read((char *)c, sizeof(c));
        fin.close();
    }
    else
    {

        for (int i = 0; i < 10; i++)
        {
            strcpy(c[i].name, "");
            c[i].num = 0;
            strcpy(c[i].mail, "");
            c[i].exist = false;
        }
    }
    int curr = 0;
    for (int i = 0; i < 10; i++)
    {
        if (c[i].exist)
            curr++;
    }
    int choice, a;
    do
    {
        cout << "\n--------CONTACT MANAGEMENT SYSTEM--------" << endl;
        cout << "1. Add contact\n2. View contact\n3. Search contact\n4. Update contact\n5. Delete contact\n6. Exit\n";
        cout << "Enter your choice : ";

        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter number of contact you want to add : ";

            cin >> a;
            int num;
            for (int i = curr; i < curr + a; i++)
            {
                    bool found;
                    do
                    {
                        found = false;
                        cout << "Enter number : ";
                        cin >> c[i].num;
                        for (int j = 0; j < 10; j++)
                        {
                            if (j != i && c[j].exist && c[j].num == c[i].num)
                            {
                                found = true;
                                cout << "Number already exist\n";
                                break;
                            }
                        }
                    } while (found);
                cin.ignore();

                cout << "Enter name : ";
                cin.getline(c[i].name, 100);
                cout << "Enter mail id : ";
                cin.getline(c[i].mail, 100);
                c[i].exist = true;
            }
            curr += a;
            ofstream fout("contact.dat", ios::binary);
            fout.write((char *)c, sizeof(c));
            fout.close();
            cout << "Contact added successfully";

            break;
        }
        case 2:
        {
            for (int i = 0; i < 10; i++)
            {
                if (c[i].exist)
                {
                    cout << "\nNumber : " << c[i].num;
                    cout << "\nName : " << c[i].name;
                    cout << "\n Mail : " << c[i].mail;
                }
            }
            break;
        }
        case 3:
        {
            cout << "Enter the number : ";
            long long num, pos = -1;
            cin >> num;
            for (int i = 0; i < 10; i++)
            {
                if (c[i].exist && num == c[i].num)
                {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
            {
                cout << "Contact not found" << endl;
            }
            else
            {
                cout << "Number : " << c[pos].num << '\n'
                     << "Name : " << c[pos].name << '\n'
                     << "Mail : " << c[pos].mail << endl;
            }
            break;
        }

        case 4:
        {
            cout << "Enter name : ";
            int pos = -1;
            char p[100];
            cin.ignore();
            cin.getline(p, 100);
            for (int i = 0; i < 10; i++)
            {
                if (c[i].exist && strcmp(c[i].name, p) == 0)
                {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
            {
                cout << "Number not found ";
            }
            else
            {

                cout << "Enter new number : ";
                cin >> c[pos].num;
                cin.ignore();
                cout << "Enter new mail : ";
                cin.getline(c[pos].mail, 100);
                ofstream fout("contact.dat", ios::binary);
                fout.write((char *)c, sizeof(c));
                fout.close();
                cout << "Records updated successfully";
            }
            break;
        }
            

        case 5:
        {
            bool found = false;
            cout << "Enter name : ";
            char n[100];
            cin.ignore();
            cin.getline(n, 100);

            for (int i = 0; i < 10; i++)
            {
                if (c[i].exist && strcmp(c[i].name, n) == 0)
                {
                    c[i].num = 0;
                    strcpy(c[i].name, "");
                    strcpy(c[i].mail, "");
                    c[i].exist = false;
                    found = true;
                    break;
                }
            }
            if (found)
            {
                ofstream fout("contact.dat", ios::binary);
                fout.write((char *)c, sizeof(c));
                fout.close();
                cout << "Records deleted successfully ";
            }
            else
            {
                cout << "Contact not found \n";
            }
            break;
        }

        case 6:
        {
            cout << "Thank you";
            break;
        }
        default:
            cout << "Invalid choice ";
        }
    } while (choice != 6);

    return 0;
}

/*Output :
--------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 1
Enter number of contact you want to add : 2
Enter number : 741852963
Enter name : aanchal
Enter mail id : abc@gmail.com
Enter number : 963852741
Enter name : singh
Enter mail id : xyz@gmail.com
Contact added successfully
--------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 2
Number : 741852963
Name : aanchal
 Mail : abc@gmail.com
Number : 963852741
Name : singh
 Mail : xyz@gmail.com
 --------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 3
Enter the number : 741852963
Number : 741852963
Name : aanchal
Mail : abc@gmail.com
--------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 4
Enter name : singh
Enter new number : 852741963
Enter new mail : qwe@gmail.com
Records updated successfully
--------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 5
Enter name : singh
Records deleted successfully
 --------CONTACT MANAGEMENT SYSTEM--------
1. Add contact
2. View contact
3. Search contact
4. Update contact
5. Delete contact
6. Exit
Enter your choice : 6
Thank you
*/