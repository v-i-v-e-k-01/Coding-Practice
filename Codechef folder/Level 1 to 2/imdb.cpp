//IMDB
#include<iostream>
using namespace std;
int main()
{
    int t,n,x,i,maxr=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int arr[n][2];
        for(i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1];
            if(arr[i][0]<=x)
            {
                if(maxr<arr[i][1])
                    maxr=arr[i][1];
            }
        }
        cout<<maxr<<endl;
        maxr=0;
    }
}