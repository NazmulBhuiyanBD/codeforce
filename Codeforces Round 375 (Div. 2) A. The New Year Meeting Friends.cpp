#include <iostream>

using namespace std;

int main()
{   int a,b,c,r;
    cin>>a>>b>>c;
    if(a>b && b>c)
    {
        r=(a-b)+(b-c);
    }
    else if(a>c && c>b)
    {
        r=(a-c)+(c-b);
    }
    else if(b>a && a>c)
    {
        r=(b-a)+(a-c);
    }
    else if(b>c && c>a)
    {
        r=(b-c)+(c-a);
    }else if(c>a &&a>b)
    {
        r=(c-a)+(a-b);
    }
    else if(c>b && b>a)
        {r=(c-b)+(b-a);}

        cout<<r;
    return 0;
}