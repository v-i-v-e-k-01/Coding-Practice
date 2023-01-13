#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n],i,t=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        if(n==m)
        {
            for(i=0;i<n;i++)
            {
                t=t+arr[i];
            }
            cout<<t;
        }
        else{
            t=n-m;
            
        }
            
    }
}