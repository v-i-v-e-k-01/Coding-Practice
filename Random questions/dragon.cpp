#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0,i;
    for (i=1;i<=d;i++)
    {
        if(((i%k==0) || (i%l==0)) || ((i%m==0) || (i%n==0)))
            count=count+1;
    }
    cout<<count;
}