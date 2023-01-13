#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    string Words[n];
    for(i=0;i<n;i++)
    {
        cin >> Words[i];
    }
    for(i=0;i<n;i++)
    {
        if(Words[i].length()>10)
        {
            int num=Words[i].length()-2;
            cout<< Words[i][0];
            cout<< num;
            cout<< Words[i][num+1];
            cout<< "\n";
        }
        else
        {
            cout<< Words[i]+ "\n";
        }
    }
}