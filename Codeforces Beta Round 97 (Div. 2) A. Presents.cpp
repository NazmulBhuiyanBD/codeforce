#include <iostream>

using namespace std;

int main()
{
    int  n ;
 cin>>n;
 int arr[n+1],temp;
 for(int i=1;i<n+1;i++)
 {
     cin>>temp;
     arr[temp]=i;
 }
  for(int i=1;i<n+1;i++)
 {

     cout<<arr[i]<<" ";
 }


    return 0;
}