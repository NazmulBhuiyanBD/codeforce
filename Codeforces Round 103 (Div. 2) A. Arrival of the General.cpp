#include <iostream>

using namespace std;

int main()
{
    int n,maxi,mini,maxic=0,minic=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    mini=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            maxic=i;
        }
        if(arr[i]<=mini)
        {
            mini=arr[i];
            minic=i;
        }
    }
    if(maxic>minic)
 cout<<maxic+n-minic-2;
 else
    cout<<maxic+n-minic-1;
    return 0;
}