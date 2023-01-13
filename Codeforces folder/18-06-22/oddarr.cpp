#include<iostream>
using namespace std;
int sort(int arr[],int len);
int diffcombi(int ti[],int n);
int main()
{
    int t,i;
    cout<<"Enter no. of trials:";
    cin>>t;
    int res[t];
    for(i=0;i<t;i++)
    {
        //trial entry part
        int n;
        cout<<"Enter"<<i<<"th trial element count:";
        cin>>n;
        cout<<"Enter elements:";
        int ti[n],j;
        for(j=0;j<n;j++)
        {
            cin>>ti[j];
        }
        //result part
        if(sort(ti,n)==0)
        {
            res[i]=0;
        }
        else
        {
            res[i]=diffcombi(ti,n);
        }  
    }
    //result out
    for(i=0;i<t;i++)
    {
        cout<<res[i]<<"\n";
    }
}
//bubble sort 
int sort(int arr[],int len)
{
    int count=0,a,b;
    for(a=0;a<(len-1);a++)
    {
        for(b=0;b<(len-1);b++)
        {
            if(arr[b]>arr[b+1])
            {
                swap(arr[b],arr[b+1]);
                count++;
            }
        }
    }
    cout<<"Count:"<<count;
    //odd no. of swap
    if(count%2==0)
        return 0;
    else
        return count;
}
int diffcombi(int ti[],int n)
{
    //diff combination of subsets
    int pt1,pt2,combi[n];
    for(pt1=1;pt1<=n;pt1++)
    {
        pt2=n-pt1;
        int sub1[pt1],sub2[pt2],k;
        //subset1 def
        for(k=0;k<pt1;k++)
        {
            sub1[k]=ti[k];
        }
        //subset2 def
        for(k=0;k<pt2;k++)
        {
            sub2[k]=ti[pt1+k];
        }
        //oddarr of given combintn
        int pt1srt=sort(sub1,pt1),pt2srt=sort(sub2,pt2);
        if(pt1srt==0)
        {
            if(pt2srt==0)
                combi[pt1-1]=0;
            else
                combi[pt1-1]=pt2srt;
        }
        else
        {
            if(pt2srt==0)
                combi[pt1-1]=pt1srt;
            else
                combi[pt1-1]=pt1srt+pt2srt;
        }
    }
    //maximum of diff combintn
    int maxcombi=combi[0],l;
    for(l=1;l<n;l++)
    {
        if(maxcombi<combi[l])
            maxcombi=combi[l];
    }
    return maxcombi;
}    