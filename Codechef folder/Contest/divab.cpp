//DIVAB
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,n,res,temp,i=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(a==0)
        {
            cout<<"-1"<<endl;
        }
        else if(b==0)
        {
            if(n%a==0)
                cout<<n<<endl;
            else
            {
                res=n/a;
                cout<<a*(res+1)<<endl;
            }
        }
        else if(b%a==0 || a%b==0)
            cout<<"-1"<<endl;
        else
        {
            if(n==0)
                a%b==0 || b%a==0?cout<<"-1"<<endl:cout<<a<<endl;
            else if(n%a==0 && n%b!=0)
                cout<<n<<endl;
            else
            {
                temp=n/a;
                while(i)
                {
                    if(a*(temp+i)%b!=0)
                    {
                        cout<<a*(temp+i)<<endl;
                        break;
                    }
                    i++;
                }
            }
        }
        res=0,temp=0,i=1;
    }
}