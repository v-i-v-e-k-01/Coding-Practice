#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,id;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        int a[n],sm;
        cin>>a[0],sm=a[0];
        vector<int> ind;
        ind.push_back(0);
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(sm=a[i])
                ind.push_back(i);
            else if(sm>a[i])
                sm=a[i];ind.clear(),ind.push_back(i);
        }
        sm=0;          
        for (int j = 0; j < y; j++)
        {
            if(!ind.empty())
            {
                id=ind[0];
                a[id]= (a[id] xor x);
            }
            else
            {
                sm=a[0],ind.push_back(0);
                for(int i=1;i<n;i++)
                {
                    if(sm=a[i])
                        ind.push_back(i);
                    else if(sm>a[i])
                        sm=a[i];ind.clear(),ind.push_back(i);
                }    
                id=ind[0];
                a[id]=(a[id] xor x);
                sm=0;
            }
        }



        int n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<""<<endl;
        
    }
}
