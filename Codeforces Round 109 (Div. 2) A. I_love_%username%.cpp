#include <iostream>

using namespace std;

int main()
{
    int n,p=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        int maxi=arr[0];
    int mini=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            p++;

        }
        else if(arr[i]<mini)
        {
            mini=arr[i];
            p++;

        }
    }
    cout<<p;
    return 0;
}