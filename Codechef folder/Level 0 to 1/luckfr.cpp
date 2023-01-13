//LUCKFOUR
#include<iostream>
using namespace std;
int main()
{
    int t,n,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n)
        {
            if(n%10==4)
                count++;
            n=n/10;
        }
        cout<<count<<endl;
        count=0;
    } 
}