//1385A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[3];
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }
        sort(a, a+3);
        if (a[1]!=a[2])         
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        
    }
    
}