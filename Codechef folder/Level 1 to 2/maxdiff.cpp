//MAX_DIFF
#include<iostream>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        s<n?cout<<s<<endl:cout<<n-(s-n)<<endl;
        //if s<n t1=0, t2=s , so diff=s
        //if s>n t1=s-n, t2=n, so diff=n-(s-n)

    }
}