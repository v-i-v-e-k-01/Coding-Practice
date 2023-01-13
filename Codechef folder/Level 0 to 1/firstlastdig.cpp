//FLOW004
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,num,len,last;
    cin>>t;
    while(t--)
    {
        cin>>num;
        len=ceil(log10(num+1));
        //ceil() rounds up to nearest( and greater)integer
        //log10() finds log to base 10.
        //for eg. say we have 123,so log10(123) is 2.something which is rounded by math.ceil to 3
        //so we get answer 3. for special case of number zero, we put (num+1) in bracket to get correct answer
        last=num/pow(10,len-1);
        cout<<(num%10) + last<<endl; 
    }
}