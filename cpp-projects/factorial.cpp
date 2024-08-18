#include <iostream>
using namespace std;
//compute factorial of n
int fact()
{
    int n, fact=1;
    cout<<"enter:";
    cin>>n;
    if (n=0)
        fact=1;
    else if (n>0)
    {
        for (int i=n; i>0; i--)
        {
            fact*=i;
        }
    }
    else 
        cout<<"invalid number";
    cout<<"factorial: "<<fact;
}

int main()
{
    fact();
    return 0;
}