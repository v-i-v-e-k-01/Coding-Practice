//SMOL
#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        n>=k && k!=0?cout<<n%k<<endl:cout<<n<<endl;
    }
}