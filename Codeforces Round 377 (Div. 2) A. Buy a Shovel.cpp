#include <iostream>

using namespace std;

int main()
{   int n,a,sum=0,cnt=1,q,p=1;
    cin>>n>>a;
    q=n;
    while(p)
    {
        if(q%10==0 || (q-a)%10==0)
        {
            p=0;
        }
        else
        {
            q=q+n;
            cnt++;
        }

    }
cout<<cnt;
    return 0;
}