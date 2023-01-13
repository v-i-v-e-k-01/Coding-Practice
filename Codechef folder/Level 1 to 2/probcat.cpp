//PROBCAT
#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a>=1 && a<100 )
            cout<<"Easy"<<endl;
        else if(a>=100 && a<200)
            cout<<"Medium"<<endl;
        else
        {
            if(a>=200 && a<=300)
                cout<<"Hard"<<endl;
        }
    }
} 
