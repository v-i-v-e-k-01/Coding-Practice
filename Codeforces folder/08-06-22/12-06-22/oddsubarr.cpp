#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sort(int arr[],int len);
int main()
{
    int t,i,n,j;
    cout<<"Enter no of entries:";
    cin>>t;
    int res[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        int arr[n],j;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            
        }
        if(sort(arr,n)==0)
        {
            res[i]=0;
        }
        else{
            int z,a,resi[n];
            for(z=1;z<=n;z++)
            {
                a=n-z;
                int temp1[z],temp2[a],k;
                for(k=0;k<z;k++)
                {
                    temp1[k]=arr[k];
                }
                for(k=0;k<a;k++)
                {
                    temp2[k]=arr[z+k];
                }
                int cnt1=sort(temp1,z) ,cnt2=sort(temp2,a);
                if(cnt1%2==1)
                {
                    if(cnt2%2==1)
                    {
                        resi[z-1]=cnt1+cnt2;
                    }
                    else
                    {
                        resi[z-1]=cnt1;
                    }
                }
                else if(cnt2%2==1)
                {
                    resi[z-1]=cnt2;
                }
            }
            int max=resi[0];
            for(z=1;z<n;z++)
            {
                if(max<resi[z])
                {
                    max=resi[z];
                }
            }
            res[i]=max;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<res[i];
        cout<<"\n";
    }
}
int sort(int arr[],int len)
{
    int j=len,k,count;
    while(j--)
    {
        for(k=0;k<(len-1);k++)
        {
           if(arr[k]>arr[k+1])
           {
            swap(arr[k],arr[k+1]);
            count++;
           }
        }
    }
    return count;
}