#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>> t;
    int res[t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        res[i]=a+b;
    }
    for(i=0;i<t;i++)
    {
        cout<<res[i]<<"\n";
    }
}