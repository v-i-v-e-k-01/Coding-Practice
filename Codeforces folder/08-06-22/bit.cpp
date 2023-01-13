#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x=0,n,i;
    string temp;
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin>> temp;
        if(temp=="++X" || temp=="X++" )
        {
           x++; 
        }
        else if(temp== "--X" || temp== "X--")
        {
            x--;
        }
    }
    cout<< x;
}