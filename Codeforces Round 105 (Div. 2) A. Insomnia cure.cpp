#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,k=0,p=0;
    cin>>a>>b>>c>>d>>e;
    for(int i=1;i<=e;i++)
    {
        if(i%a==0)
        {
            k++;
        }
        else if(i%b==0)
        {
            k++;
        }
              else if(i%c==0)
        {
            k++;
        }
         else if(i%d==0)
        {
            k++;
        }
    }
    cout<<k;

    return 0;
}