//FLOW007
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,revr=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n)
        {
            revr=revr*10 + n%10;
            n=n/10;
        }
        cout<<revr<<endl;
        revr=0;
    }
}