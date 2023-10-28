#include <iostream>

using namespace std;

int main()
{
    int n,ct=0;
    cin>>n;
    while(n!=0)
    {
        if(n>=100)
        {
            n=n-100;
            ct++;
        }
        else if(n>=20)
        {
            n=n-20;
            ct++;
        }
        else if(n>=10)
        {
            n=n-10;
            ct++;
        }
        else if(n>=5)
        {
            n=n-5;
            ct++;
        }
        else
            {
                n=n-1;
            ct++;
            }
    }
    cout<<ct;

    return 0;
}