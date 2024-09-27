#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
        {
            if(i%2==1 && j%2==1)
               {
                   cout<<"##";
               }
                else if(i%2==1 && j%2==0)
                {
                    cout<<"..";
                }
            if(i%2==0 && j%2==0)
               {
                   cout<<"##";
               }
                else if(i%2==0 && j%2==1)
                {
                    cout<<"..";
                }
        }cout<<endl;
        for(int j=1;j<=a;j++)
        {
            if(i%2==1 && j%2==1)
               {
                   cout<<"##";
               }
                else if(i%2==1 && j%2==0)
                {
                    cout<<"..";
                }
            if(i%2==0 && j%2==0)
               {
                   cout<<"##";
               }
                else if(i%2==0 && j%2==1)
                {
                    cout<<"..";
                }
        }
        cout<<endl;
        }
    }
    return 0;
}
