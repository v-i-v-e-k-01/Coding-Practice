#include<iostream>
using namespace std;
int fibo(int t){
    
    if(t==1 || t==2)
    {
        return t;
    }
    else
    {
        return fibo(t-1)+fibo(t-2);
    }
}
int main()
{
    int t;
    cin>>t;
    cout<<fibo(t)<<endl;
}