#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum=0,dif;
    cin>>t;
    //int re[t];
    while(t--)
    {
        int n;
        dif=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            sum=abs(arr[i]-arr[i+1]);
            if(sum>=dif)
            {dif=sum;}
        }
        if(dif<=1)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}