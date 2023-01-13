//WEIGHTBL
#include<iostream>
using namespace std;
int main()
{
    int t,w1,w2,x1,x2,m,diff;
    cin>>t;
    while(t--)
    {
        cin>>w1>>w2>>x1>>x2>>m;
        diff=w2-w1;
        if(m*x1<=diff && diff<=m*x2)
            cout<<1<<endl;
        else    
            cout<<0<<endl;
    }
}