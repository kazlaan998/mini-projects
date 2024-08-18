//banking system
//Create account, Deposit , Withdraw, Close the account, Balance enquiry, Exit, Delete account

#include <iostream>
#include <fstream>
using namespace std;

//struct account
//{
//}a;

int main()
{
    fstream read;
    fstream write;

    void create()
    {
        write.open("db.txt";ios::app);
        if (write.is_open())
        {
            string name;
            cout<<"Enter name of account holder: "; cin>>name;

            float balance;
            cout<<"enter balance: "; cin>>balance;

            write<<name<<"\t"<<balance<<"\n";
        }
        else
        {
            cout<<"error in file opening!";
        }
        write.close();
    }

    void open()
    {
        write.open("db.txt";ios::app);
        if (write.is_open())
        {
            string accholder;
            cout<<"Enter name of account holder:"; cin>>accholder;
            while (read>>name && read>>balance)
            {
                if (name==accholder)
                {
                    flag=1;
                    break;
                }
            }
            if (flag=1)
            {
                cout<<""
            }
        }
        else
        {
            cout<<"error in file opening!";
        }
        write.close();
    }

    void deposit()
    {
        write.open("db.txt";ios::app);
        if (write.is_open())
        {
            int dep;
            cout<<"enter money to be deposited: "; cin>>dep;
            if
        }
        else
        {
            cout<<"error in file opening!";
        }
        write.close();
    }
    void withdraw(){}
    void close(){}
    void del(){}
    
    void bal()
    {
        read.open("db.txt";ios::in);
        if (read.is_open())
        {
            string n;
            cout<<"Enter name of account holder: "; cin>>n;
            int flag=0;
            while (read>>name && read>>balance)
            {
                if (name==n)
                {
                    flag=1;
                    break;
                }
            }

            if (flag=1)
            {
                cout<<"Name of Account Holder:"<<n;
                cout<<"Remaining Balance: "; cout<<balance;
            }
            else
            {
                cout<<"Records not found!";
            }
        }
        else
        {
            cout<<"error in file opening!";
        }
        read.close();
    }
    
    int ch;
    cout<<"============CHOICES==========\n 1.Create 2.Open 3.Deposit 4.Withdraw 5.Close 6.Delete 7.Check Balance 8.Exit";
    cout<<"Enter choice: "; 
    cin>>ch;
    switch(ch)
    {
        case 1:
            create();
            break;

        case 2:
            deposit();
            break;

        case 3:
            withdraw();
            break;

        case 4:
            close();
            break;

        case 5:
            del();
            break;

        case 6:
            cout<<"exited successfully";
            exit(0);

        default:
            cout<<"wrong choice";
    }
    return 0;
}