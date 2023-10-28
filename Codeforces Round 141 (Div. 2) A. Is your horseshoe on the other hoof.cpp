#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int sum=0;
 long long int arr[4];
 for(int i=0;i<4;i++)
 {

     cin>>arr[i];
 }
sort(arr, arr + 4);
 for(int i=0;i<4;i++)
 {

     if(arr[i]==arr[i+1])
     {
         sum++;

     }

 }
cout<<sum;


    return 0;
}