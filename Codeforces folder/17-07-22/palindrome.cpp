#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,digit,n,i,num=0,lft,rt,rtemp1,rtemp2,temp;
    cin>>t;
    while(t--)
    {  
        cin>>digit;
        cin>>n;
        for(i=0;i<digit;i++)
        {
            lft=(n/pow(10,n-1-i))-(n/pow(10,n+1-i));
            rtemp1=pow(10,i+1),rtemp2=pow(10,i-1);
            i==0? rt=n%rtemp1:rt=(n%rtemp1)-(n%rtemp2);
            if(lft < rt)
                num=num+(pow(10,n-1-i)*(rt-lft));
            else if(lft > rt)
            {
                num=num+((10-lft)*pow(10,n-1-i))+(11-rt);
                n=n+num,temp=num,num=i=0,digit++;
            }
            else
                if(n-1-i==i || n-2-i==i)
                    i=digit;
        }
        cout<<num<<endl;
        num=temp=0;
        
    }
}