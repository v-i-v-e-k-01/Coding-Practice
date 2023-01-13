#include<iostream>
using namespace std;
int main()
{
    int n,x,i,count=0,temp;
    cin>>n>>x;
    int arr[2*n];
    for(i=0;i<2*n;i=i+2)
        cin>>arr[i]>>arr[i+1];
    count=(arr[0]%x)+arr[1]-arr[0];
    for(i=2;i<2*n-1;i=i+2)
    {
        temp=(arr[i]-arr[i-1])%x;
        count=count+temp+(arr[i+1]-arr[i]);
    }
    cout<<count<<endl;
}
