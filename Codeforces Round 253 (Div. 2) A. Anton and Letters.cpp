#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string p;
    getline(cin,p);
    sort(p.begin(),p.end());
    for(int i=0; i<p.size()-1; i++)
    {
        if(p[i]=='{}' || p[i]==',' || p[i]==' ')
            {
                continue;
            }
            else
            {
                if(p[i]!=p[i+1])
                {
                    count++;
                }
            }
    }
    cout<<count-1;
}