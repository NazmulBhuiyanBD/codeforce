#include <iostream>

using namespace std;

int main()
{
    int n,p,q,cnt=0;
    cin>>n>>p;
    q=240-p;
    for(int i=5;i<=q;i=i+5)
    {   q=q-i;
        cnt++;
        if(cnt==n)
        {
            break;
        }
    }
    cout<<cnt;
    return 0;

}