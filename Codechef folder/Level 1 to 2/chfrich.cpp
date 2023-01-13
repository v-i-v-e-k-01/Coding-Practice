//CNFRICH
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,x;
    cin>>t;
    double res;
    while(t--)
    {
        cin>>a>>b>>x;
        //b-a=x*res
        res=(b-a)/x;
        res=ceil(res);
        //ceil() outputs nearest next integer
        cout<<res<<endl;
    }
}