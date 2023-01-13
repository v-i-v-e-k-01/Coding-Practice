#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x;
    cin>>x;
    for(int i=0;x[i];i++)
    {
        if(i==0 && x[i]=='9')
            continue;
        else if( x[i]>'4' )
            x[i]='9'-x[i]+'0';
        else if(x[0]=='0') 
            x[0]='9'; 
    }
    cout<<x<<endl;
}