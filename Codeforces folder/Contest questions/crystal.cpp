#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x,y,z;
    cin>>x>>y>>z;
    if((2*x+y)<a)
    {
        if((3*z+y)<b)
            cout<<"0"<<endl;
        else
            cout<<3*z+y-b<<endl;
    }
    else if((3*z+y)<b)
    {
        if((2*x+y)<a)
            cout<<"0"<<endl;
        else
            cout<<(2*x+y)-a<<endl;
    }
    else
    {
        unsigned long int res=(3*z+y-b)+(2*x+y-a);
        cout<<res<<endl;

    }
}