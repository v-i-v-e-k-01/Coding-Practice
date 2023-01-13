//MXEVNSUB
#include<iostream>
using namespace std;
int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=n*(n+1)/2;
        sum%2==0?cout<<n<<endl:cout<<n-1<<endl;
    }
}