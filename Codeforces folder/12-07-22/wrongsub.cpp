#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
            n=floor(n/10);
        else
            n=n-1;
    }
    cout<<n;
}