#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        if(n%2==1)
        {
            if(n==1)
            {
                int ar1;
                cin>>ar1;
                cout<<"Mike"<<"\n";
            }
            else
            {
                int j,count=0;
                for(j=0;j<n;j++)
                {
                    arr[j]--;
                    count++;
                    if(arr[j]==0)
                    {
                        if(count%2==0)
                            cout<<"Mike";
                        else   
                            cout<<"Joe";
                        break;
                    }
                    if(j==(n-1))
                        j=0;
                }
            }
        }
        else
        {
            int j,min=arr[0],val=0;
            for(j=1;j<n;j++)
            {
                if(arr[j]<min)
                    min=arr[j],val=j;
            }
            if((val)%2==0)
                cout<<"Joe"<<"\n";
            else
                cout<<"Mike"<<"\n";
        }
    }
}
