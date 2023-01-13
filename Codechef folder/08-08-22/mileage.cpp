//MILEAGE
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,x,y,a,b;
    double res1,res2;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>a>>b;
        res1=((double)n/a)*x;
        res2=((double)n/b)*y;
        if(res1<res2)
            cout<<"PETROL"<<endl;
        else if(res1>res2)
            cout<<"DIESEL"<<endl;
        else
            cout<<"ANY"<<endl;
    }
}