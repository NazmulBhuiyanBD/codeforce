#include <iostream>
 
using namespace std;
 
int main()
{
    string arr,brr;
    cin>>arr>>brr;
 
 
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==brr[i])
        {
            cout<<'0';
        }
        else
            cout<<'1';
    }
}