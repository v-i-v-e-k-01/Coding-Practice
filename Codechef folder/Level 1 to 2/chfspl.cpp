//CHFSPL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a,b,c,mi;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        mi=min(c,min(a,b));
        //min() takes in two values and returns minimum.
        // function present in algorithm header library.
        cout<<a+b+c-mi<<endl;
        
        /*if(a>=b && c>=b)
            cout<<a+c<<endl;
        else if(b>=c && a>=c)
            cout<<b+a<<endl;
        else if(c>=a && b>=a)
            cout<<c+b<<endl;*/
    }
}