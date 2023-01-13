#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        int min=arr[0],index=1;
        for(i=1;i<n;i++)
        {    
            if(min>arr[i])
                min=arr[i],index=i+1;
       }
        if(n%2==0)
        {
            index%2==0?cout<<"Mike"<<endl:cout<<"Joe"<<endl;
        }
        else
        {
            cout<<"Mike"<<endl;
        }
    }
}
