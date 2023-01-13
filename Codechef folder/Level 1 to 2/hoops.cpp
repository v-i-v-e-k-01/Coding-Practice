//HOOPS
#include<iostream>
using namespace std;
int main()
{
    int t,n,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n%2==0? cout<<1+n/2<<endl:cout<<(n+1)/2<<endl;
    }
}