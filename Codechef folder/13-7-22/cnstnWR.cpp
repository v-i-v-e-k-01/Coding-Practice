#include<iostream>
using namespace std;
int main()
{
    int t,n,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
            cout<<"YES"<<endl;
        else if(n%2==0 || n%7==0)
            cout<<"YES"<<endl;
        else
        {
            if(n<2)   
                cout<<"NO"<<endl;
            else if(n>2 && n<7)
                cout<<"NO"<<endl;
            else if(((n%7)%2)==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}