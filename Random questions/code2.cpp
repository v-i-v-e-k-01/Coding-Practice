#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {           
        int n1,n2,num,i;
        cin>>n1;
        deque<int> ar1;
        ar1.resize(n1);
        for(i=0;i<n1;i++)
        {
            cin>>num;
            ar1.at(i)=num;
        }
        cin>>n2;
        deque<int> ar2;
        ar2.resize(n2);
        for(i=0;i<n2;i++)
        {
            cin>>num;
            ar2.at(i)=num;
        }
        int k;
        cin>>k;
        
    }
}