#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {   int sum=0;
       char arr[10][10];
       for(int i=0;i<10;i++)
       {
           for(int j=0;j<10;j++)
       {
           cin>>arr[i][j];
       }
       }
            for(int i=1;i<=10;i++)
       {
           for(int col=1;col<=10;col++)
       {
           if(arr[i-1][col-1]=='X')
           {
               if(i==1|| i==10 || col==1|| col==10)
               {
                   sum+=1;
               }
               else if(i==2||i==9||col==2||col==9)
               {
                   sum+=2;
               }else if(i==3||i==8 || col==3||col==8)
               {
                   sum+=3;
               }
               else if(i==4 ||i==7 ||col==4||col==7)
               {
                   sum+=4;
               }
               else if(i==5 || i==6 || col==5 || col==6)
               {
                   sum+=5;
               }
               //cout<<"row" <<"col"<<sum<<endl;
           }
 
       }
       }
       cout<<sum<<endl;
 
    }
    return 0;
}
