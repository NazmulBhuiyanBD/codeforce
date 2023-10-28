#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else if(i%4==1 && j==col-1)
            {
                cout<<"#";
            }
            else if(i%4==3 && j==0)
            {
                cout<<"#";
            }
            else
                cout<<".";
        }
        cout<<endl;
    }
}