#include <stdio.h>
void solve() 
{
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n-1; i++) 
        if(a[i]>a[i+1]) 
            ans++,i++;
    printf("%d\n",ans);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) 
        solve();
    return 0;
}