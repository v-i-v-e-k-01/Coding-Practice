#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>> n;
    cin>> k;
    int arr[n];    
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i] >= arr[k-1] && arr[i]!=0)
        {
            count++;
        }
    }
    cout<< count;
}