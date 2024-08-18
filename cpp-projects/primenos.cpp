#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter a number to be checked: "; int n; cin>>n;
    for (i=2; i<n; i++)
    {
        if (n%i==0)
            break;
    }
    if (i==n)
        cout<<"it is a prime no\n";
    else
        cout<<"it is not a prime no\n";
    return 0;
}