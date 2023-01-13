#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,j=1,k=1;
    cin>> t;
    int res[t],i;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%3==0 || b%3==0)
        {
            res[i]=0;
        }
        else if(a==b || abs(b-a)%3==0)
        {
            res[i]=1;
        }
        else{
            if(a>b)
            {
                int temp=b;
                b=a;
                a=temp;
            }
            if(abs(b-(2*a))%3==0)
            {
                res[i]=2;
            }
            else
            {
                res[i]=3;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<res[i]<<"\n";
    }
}