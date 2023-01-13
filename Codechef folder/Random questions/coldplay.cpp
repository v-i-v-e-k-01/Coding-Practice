#include<iostream>
using namespace std;
int main()
{
    int t,m,s,i;
    cin>>t;
    int res[t];
    for(i=0;i<t;i++)
    {
        cin>>m>>s;
        res[i]=m/s;
    }
    for(i=0;i<t;i++)
    {
        cout<<res[i]<<"\n";
    }
}