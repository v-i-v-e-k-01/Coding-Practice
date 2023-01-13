#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f,i;
    cin>> t;
    string res[t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>e>>f;
        if((a+b+c)==(d+e+f))
        {
            res[i]="Pass";
        }
        else{
            res[i]="Fail";
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<res[i];
    }   
}