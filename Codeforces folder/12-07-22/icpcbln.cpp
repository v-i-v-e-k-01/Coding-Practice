#include<iostream>
#include<cstring>
using namespace std;
int chkrep(int strl,char arr[],char let);
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int count=0,strl;
        cin>>strl;
        char arr[strl],let;
        for(i=0;i<strl;i++)
            cin>>arr[i];
        for(i=0;i<strl;i++)
        {   
            let=arr[i];
            count=count+chkrep(i,arr,let);
        }
        cout<<count<<endl;
    }
}
int chkrep(int strl,char arr[],char let)
{
    int i;
    if(strl==0)
        return 2;
    else
    {   for(i=0;i<strl;i++)
        {
            if(arr[i]==let)
                return 1;
        }
        return 2;
    }
}