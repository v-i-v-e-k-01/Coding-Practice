#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,temp;
    cin>>n;
    int pr[n];
    for(i=0;i<n;i++)
        cin>>pr[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(pr[i]>pr[i+1])
            {
                temp=pr[i];
                pr[i]=pr[i+1];
                pr[i+1]=temp;
            }
        }
    }
    cin>>m;
    int cp[m];
    int res=0;
    for(i=0;i<m;i++)
        cin>>cp[i];
    for(i=0;i<m;i++)
    {
        temp=cp[i];
        for(j=0;j<n;j++)
            res=res+pr[i];
        cout<<res-pr[n-temp+1]<<endl;
    }
}