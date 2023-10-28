#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n;
    string arr[4]={"I hate ","I love "," that "," it"};

    for(int i=1;i<=n;i++)
    {

       {
           p=(i+1)%2;
           if(n>=i)
        cout<<arr[p];

       }
           if(i==n)
        {
            cout<<arr[3];
        }
        else
            cout<<arr[2];
       }

}
 