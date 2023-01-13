//TWODISH
#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        if(b>=n)
        {
            a+c>=n?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}