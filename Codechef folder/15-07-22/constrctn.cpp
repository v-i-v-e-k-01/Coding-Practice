#include<iostream>
using namespace std;
int main()
{
    int t,n,i,rem2,rem7;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 ||n==3||n==5)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
} 
//to find if given n=2x + 7y(x and y are variables)
//here we get all even no. by (x=0,1,2,...) and (y=0)
//we get all odd numbers after 7 by (x=0,1,2,...) and (y=1)
//so only remaining numbers are 1,3,5.