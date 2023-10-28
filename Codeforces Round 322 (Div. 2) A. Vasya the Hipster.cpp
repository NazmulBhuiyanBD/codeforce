#include <iostream>

using namespace std;

int main()
{
    int x,y,z,p;
    cin>>x>>y;
    if(x>y)
    {
        z=y;
        p=(x-y)/2;
    }
    else
    {
        z=x;
        p=(y-x)/2;
    }
    cout<<z<<" "<<p;
}