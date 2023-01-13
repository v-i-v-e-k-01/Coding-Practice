#include<iostream>
#include<cmath>
using namespace std;
int fibo(int num)
{
    if (num==1 || num==2)
        return num;
    else
        return fibo(num-1)+fibo(num-2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=1;
        int count=7;
        cin>>n;
        for (i = 1; !(i<= 0); i=i+count)
        {
            if(count!=1)
                count--;
            if(ceil(log10(fibo(i)))==n)
                cout<<i+1<<endl,i=i-count-1;
            else
                continue;
        }
    }
    return 0;
}