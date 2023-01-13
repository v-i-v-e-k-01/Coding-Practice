#include<iostream>
using namespace std;
int main()
{
    int t,i,x,y,a;
    cin>> t;
    string res[t];
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>a;
        if(a>=x && a<y)
        {
            res[i]="Yes";
        }
        else{
            res[i]="No";
        }
    }
    for(i=0;i<t;i++)
    {
        cout<< res[i]<<"\n";
    }
}