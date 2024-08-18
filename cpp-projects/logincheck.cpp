#include <iostream>
using namespace std;

int main()
{
	string correctuser="azzyboi";
	string correctpass="azyboii";
	string username,password;
	int attempts=3;
	for (int i=0; i<4; i++)
	{
			
			cout<<"enter username:";
			cin>>username;
			cout<<"enter password:";
			cin>>password;
			if (username==correctuser && password==correctpass)
			{
				cout<<"\nlogin successful";
				break;
			}
			else
			{
				attempts--;
				cout<<"\nlogin failed("<<attempts<<" attempts remaining)\n";
			}
			if (attempts==0)
			{
				cout<<"\nlogin denied";
				break;
			}
	}
	return 0;
}