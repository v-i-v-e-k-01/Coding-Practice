//FLOW006
#include<iostream>
using namespace std;
int main()
{
    int t,n,res=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while((n/10)!=0)
        {
            res=res + (n%10);
            n=n/10;
        }
        res=res+n;
        cout<<res<<endl;
        res=0;
    }
}