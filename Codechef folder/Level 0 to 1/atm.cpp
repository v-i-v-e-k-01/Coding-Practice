//HS08TEST
#include<iostream>
using namespace std;
int main()
{
    int req;
    double bal;            
    cin>>req;
    cin>>bal;
    if(req%5==0 && bal-(req+0.5)>=0)
    {
        bal=bal-(req+0.5);
        cout<<bal<<endl;
    }
    else
        cout<<bal<<endl;

}