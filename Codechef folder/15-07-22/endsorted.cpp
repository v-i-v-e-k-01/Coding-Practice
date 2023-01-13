#include<iostream>
using namespace std;
void func();
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		func();
    }
	return 0;
}
void func()
{
    int n,i,min,minindx,max,maxindx;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
	{
        cin>>arr[i];
		if(i==0)
		{
    		min=arr[0],max=arr[0];
    		minindx=0,maxindx=0;
		}
        if(min>arr[i])
            min=arr[i],minindx=i;
        if(max<arr[i])
            max=arr[i],maxindx=i;
	}
    if(minindx<maxindx)
        cout<<(minindx+((n-1)-maxindx))<<endl;
    else
        cout<<(minindx+((n-2)-maxindx))<<endl;
}