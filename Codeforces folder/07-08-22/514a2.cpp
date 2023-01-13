#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,res,cdig;
    cin>>x;
    int dig=ceil(log10(x));
    int power=1;
    for(int i=1;i<=dig;i++)
    {
        cdig=x%10;
        if(i==dig)
        {
            if(cdig!=9 && cdig>4)
                res=res+(9-cdig)*power;
            else
                res=res+cdig*power;
        }
        else
        {
            if(cdig>4)
                res=res+(9-cdig)*power;
            else
                res=res+cdig*power;
        }
        x=x/10;
        power=power*10;
    }
    cout<<res<<endl;
}