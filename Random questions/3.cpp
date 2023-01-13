#include<iostream>
using namespace std;
bool prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t,n,temp=1;
    cin>>t;
    while(t--)
    {
        temp=1;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            if(prime(i))
            {   if(n%i==0 && temp<i)
                    temp=i;
            } 
        }
        cout<<temp<<endl;
    }
}