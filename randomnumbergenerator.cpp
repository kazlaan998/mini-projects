#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int guess;
	int secret=rand()%10+1;
	do
	{
		cin>>guess;
		if (guess>secret)
			cout<<"too high\n";
		else if (guess<secret)
			cout<<"too low\n";
		else
			cout<<"perfecto!\n";
	} while (guess!=secret);
	
	return 0;
}