#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class DataBase
{
    public:
    int accno,debit,credit,bal = 0;
    char c;
    string name;
    void create()
    {
        system("CLS");
        cout<<"\n********* Account Opening Form *********";
        cout<<"\nEnter Account number\t";
        cin>>accno;
        cout<<"\nEnter Account holder name\t";
        cin>>name;
        cout<<"\nEnter Opepning Amount\t";
        cin>>bal;
        cout<<"\nTo confirm press y OR press any key to re-enter\n";
        cin>>c;
        if(c == 'y')
            system("CLS");
        else
        {
            create();
        }
    }
    void deposit()
    {
        system("CLS");
        cout<<"\nEnter Amount to deposit\t";
        cin>>credit;
        bal += credit;
    }
    void withdraw()
    {
        system("CLS");
        cout<<"\nBalance Amount is "<<bal;
        cout<<"\nEnter amount to withdraw\t";
        cin>>debit;
        bal -= debit;
    }
    void display_all_acount()
    {
        cout<<"\n"<<name<<"          "<<accno<<"              "<<bal;
    }
    void display()
    {
        cout<<"\nName :       "<<name;
        cout<<"\nAccount No.  "<<accno;
        cout<<"\nBalance :    "<<bal;
    }
    void delete_acc()
    {
        system("CLS");
        cout<<"\nTo confirm press y OR press any key to cancel\n";
        cin>>c;
        if(c == 'y')
        {
            name = '\0';
            accno = 0;
            bal = 0;
            system("CLS");
        }
        else
        {
            return;
        }
    }
};
int main()
{
    int ch,n,m;
    system("CLS");
    cout<<"\n##********** Banking System **********##";
    cout<<"\n             Developed by->Akash Sharma";
    cout<<"\nMAIN MANU";
    DataBase d[5];
    do
    {
        cout<<"\n\n1-Open a account\n2-Deposit\n3-Withdraw\n4-Balance Enquiry\n5-All Account Details\n6-Account details\n7-Delete Account\n8-Modify account\n9-Exit\nEnter your choice\t";
        cin>>ch;
        system("CLS");
        switch (ch)
        {
            case 1:
            {
                cout<<"\nEnter number of users ";
                cin>>n;
                m = n;
                for(int i = 0; i < n; i++)
                    d[i].create();
                break;
            }
            case 2:
            {
                cout<<"\nEnter Account number ";
                cin>>n;
                for(int i = 0; i < 5; i++)
                {
                    if(d[i].accno == n)
                    {
                        d[i].deposit();
                        break;
                    }
                }
                cout<<"\nAccount not found";
                break;
            }
            case 3:
            {
                cout<<"\nEnter Account number ";
                cin>>n;
                for(int i = 0; i < 5; i++)
                {
                    if(d[i].accno == n)
                    {
                        d[i].withdraw();
                        break;
                    }
                }
                cout<<"\nAccount not found";
                break;
            }
            case 4:
            {
                cout<<"\nEnter Account no. ";
                cin>>n;
                for(int i = 0; i < 5; i++)
                {
                    if(d[i].accno == n)
                    {
                        cout<<"\nBalance Amount: "<<d[i].bal;
                        break;
                    }
                }
                cout<<"\nAccount not found";
                break;
            }
            case 5:
            {
                cout<<"\nName         Acc/no.       Balance";
                for(int i = 0; i < m; i++)
                {
                    d[i].display_all_acount();
                }
                break;
            }
            case 6:
            {
                cout<<"\nEnter Account no. ";
                cin>>n;
                for(int i = 0; i < m; i++)
                {
                    if(d[i].accno == n)
                    {
                        d[i].display();
                        break;
                    }
                }
                break;
            }
            case 7:
            {
                cout<<"\nEnter acccount no.: ";
                cin>>n;
                for(int i = 0; i < m; i++)
                {
                    if(d[i].accno == n)
                    {
                        d[i].delete_acc();
                        m -= 1;
                        for(int j = i; i < m; j++)
                        {
                            d[j] = d[j+1];
                        }
                        break; 
                    }
                    cout<<"\nAccount not found";
                }
                break;
            }
            case 8:
            {
                cout<<"\nEnter account number\t";
                cin>>n;
                for(int i = 0; i < m; i++)
                {
                    if(d[i].accno == n)
                    {
                        d[i].create();
                        break;
                    }
                    cout<<"\nAccount not found";
                }
                break;
            }
            case 9:
            {
                exit(0);
                break;
            }
            default:
            {
                cout<<"Wrong input!!!!!!!!";
                break;
            }
        }
    } while (ch != 9);
    
    return 0;
}