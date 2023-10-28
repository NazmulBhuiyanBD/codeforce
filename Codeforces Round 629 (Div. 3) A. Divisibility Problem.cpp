#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,q;
    cin>>n;
    while(n!=0)
    {
        cin>>a>>b;
        if(a%b==0)
        {cout<<0<<endl;}
        else
        {
            c=a%b;
            q=b-c;
            cout<<q<<endl;
        }
        n--;

    }

    return 0;
}