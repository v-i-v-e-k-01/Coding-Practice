//NFS
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int u,v,a,s;
    double res;
    cin>>t;
    while(t--)
    {
        cin>>u>>v>>a>>s;    
        if(s==0)
            u==v?cout<<"Yes"<<endl:cout<<"No"<<endl;
        else
        {
            res=u*u-(2*a*s);
            res<=v*v?cout<<"Yes"<<endl:cout<<"No"<<endl;
        }    
    }
}