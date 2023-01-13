#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t,n,count,i,res;
    cin>>t;
    string c=")";
    while(t--)
    {
        count=0;
        cin>>n;
        string args;
        cin>>args;
        i=n-1;

        while(i>=0 && args.at(i)==c.at(0))
        {
            count++;
            i--;
        }
        (n-count)>=count?cout<<"No"<<endl:cout<<"Yes"<<endl;
    }

}