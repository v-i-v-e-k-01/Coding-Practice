#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n,int count);
int t,n,i,j,temp;
int main()
{
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        if(n==2)
            arr[0]<arr[1]?cout<<"0"<<endl:cout<<"1"<<endl;
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(i<=arr[i] && arr[n-1]>arr[i])
                    continue;
                else
                    sort(arr,n,count);
                    break;
                if(i==(n-2))
                    cout<<"0";
            }
        }
    }
}
void sort(int arr[],int n,int count)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count=count+1;
            }
        }
    }
    cout<<count<<endl;
    count=0;
}