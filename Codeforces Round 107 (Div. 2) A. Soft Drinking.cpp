#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a,ap,aq,sol;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        a = (k * l) / nl;
        ap = p / np;
        aq = c * d;
        sol = min(a, min(ap, aq)) / n;
        cout<<sol<<endl;


        return 0;
}
 