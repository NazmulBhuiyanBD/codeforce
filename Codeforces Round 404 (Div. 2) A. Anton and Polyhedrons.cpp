#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ct=0;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       for(int i=0;i<n;i++)
    {
       if(arr[i]=="Tetrahedron")
       {
           ct=ct+4;
       }
       else if(arr[i]=="Cube")
       {
           ct=ct+6;
       }
       else if(arr[i]=="Octahedron")
       {
           ct=ct+8;
       }
       else if(arr[i]=="Dodecahedron")
       {
           ct=ct+12;
       }
       else if(arr[i]=="Icosahedron")
       {
           ct=ct+20;
       }
    }
    cout<<ct;

    return 0;
}