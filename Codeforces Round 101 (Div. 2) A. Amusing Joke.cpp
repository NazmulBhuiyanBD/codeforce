#include <bits/stdc++.h>

using namespace std;

int main()
{   int cmt=0;
    string ch,ch2,ch3,ch4;
cin>>ch>>ch2>>ch3;
ch4=ch+ch2;
sort(ch4.begin(),ch4.end());
sort(ch3.begin(),ch3.end());
for(int i=0;i<ch4.length();i++)
{
    if(ch4[i]==ch3[i])
    {
        cmt++;
    }
}
    if(ch3.length()==cmt && ch4.length()==cmt)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}