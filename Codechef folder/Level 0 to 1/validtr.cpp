//FLOW013
#include<iostream>
using namespace std;
int main()
{
    int t,temp,count=0,i;
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            cin>>temp;
            count=count+temp;
        }
        count==180?cout<<"YES"<<endl:cout<<"NO"<<endl;
        count=0;
    }
}