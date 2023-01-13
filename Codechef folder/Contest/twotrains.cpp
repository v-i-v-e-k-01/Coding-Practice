//TWOTRAINS
#include<iostream>
using namespace std;
int main()
{
    int t,n,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>p[i];
        }
        count=p[0];
        int buffer=0;
        for (int i = 0; i < n-2; i++)
        {
            if(p[i+1]-p[i]+buffer>0)
            {
                count=count+(p[i+1]-p[i]+buffer);
                buffer=0;
            }
            else
            {
                buffer=p[i+1]-p[i]+buffer;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            count=count+p[i];
        }
        cout<<count<<endl;
    }
}