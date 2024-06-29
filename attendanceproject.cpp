#include <iostream>
using namespace std;

string name;
int att, UT, achieve, mockprac;
int total=0;

int calc(int att, int UT, int achieve, int mockprac )
{
    total+=att*0.2;
    total+=UT*0.3;
    total+= achieve*0.1;
    total +=mockprac*0.4;
    cout<<name<<" has term work assessment as : "<<total;
}

void getinfo()
{
    cout << "Name: ";
    cin >> name;
    cout << "Attendance: ";
    cin >> att;
    cout<< "unit test marks: ";
    cin>>UT;
    cout<<"Achievements marks:";
    cin>>achieve;
    cout<<"Mock practical marks: ";
    cin>>mockprac;
}

int main()
{
    cout<<"============CHOICES============ \n 1.Enter Student \n 2. Exit \n ENTER CHOICE: ";
    int ch;
    cin>>ch;
    if (ch!=1||ch!=2)
        cout<<"Invalid Choice!";
    else
        while(ch==1)
        {
            getinfo();
            calc(att, UT, achieve, mockprac);
            cout<<"\n\nDo you want to continue? (y/n): ";
            char c;
            cin>>c;
            if(c == 'y' || c=='Y')
                ch=1;
            else
                break;
        }

    return 0;
}