#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,n,i,temp;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        i=1;
        if(a%b==0 || b%a==0 ||b==1)
            cout<<"-1"<<endl;
        else
        {
            temp=(n/a);
            while(1)
            {
                if(n%a==0 && n%b!=0)    
                    break;
                n=a*(temp+i);
                i++;
            }
            cout<<n<<endl;
        }
    }
}