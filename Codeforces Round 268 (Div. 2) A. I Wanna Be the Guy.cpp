#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,p,q,cont=0,r;
    cin>>n;
    int arr[n+1]={0};
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        cin>>r;
        arr[r]=1;
    }
    cin>>q;
        for(int j=1;j<=q;j++)
    {
        cin>>r;
        arr[r]=1;
    }
        for(int k=1;k<=n;k++)
    {
        if(arr[k]==1)
        {
            cont++;
        }
    }
    if(cont==n)
    cout << "I become the guy." << endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}