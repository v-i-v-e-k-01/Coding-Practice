#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(i=0;i!=str.length();i++)
            str[i]=(toupper(str[i]));  
        if(str=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}