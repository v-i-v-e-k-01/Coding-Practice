#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void fibo()
{
    int num,i,j=1,count=0;
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    cin>>num;
 
        if(num==1)
            cout<<v[0]-1<<endl,i=0;
        else if(num==2)
            cout<<v[1]<<endl,i=0;
        else{
            int temp=v[0]+v[1];
            v.push_back(temp);
            for(i=2;i!=0;i++){
                temp=v[i]+v[i-1];
                v.push_back(temp);
                if (num<v[i+1]){
                    for(j=0;j<=i;j++)
                    {
                        if(num>=v[j] && v[j]%2==0)
                            count=count+v[j];
                    }
                    i=-1;
                }
            }
            cout<<count<<endl;
        }
        // if (num==1 || num==2)
        //     return num;
        // else
        //     return fibo(num-1)+fibo(num-2);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fibo();
    }
    return 0;
}