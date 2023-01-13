#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,i,j,lft,rt,temp,cntex=0;
    string num,num2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>num;
        for(i=0;i<n;i++)
        {
            rt=n-1-i;
            lft=i;
            if(num.at(lft)>num.at(rt))
            {
                temp=num.at(lft)-num.at(rt);
                num2.at(rt)=temp;
            }
            else if(num.at(lft)<num.at(rt))
            {
                temp=num.at(lft)+10-num.at(rt);
                num2.at(rt)=(temp+num.at(rt))%10;
                num2.at(rt+1);
                j=1;
                while(num2.at(rt+j)>=10)
                {
                    num2.at(rt+j+1)++;
                    if((rt+j)>=lft)
                        cntex++;
                    j++;
                }
            }
            //Q 1700B codeforces
        }
    }
}