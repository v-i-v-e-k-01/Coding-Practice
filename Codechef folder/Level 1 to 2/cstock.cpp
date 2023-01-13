//CSTOCK
#include<iostream>
using namespace std;
int main()
{
    int t;
    double s,a,b,c,st;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        st=s*((100+c)/100);
        if(a<=st && st<=b)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}