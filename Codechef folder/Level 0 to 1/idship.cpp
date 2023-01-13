//FLOW010
#include<iostream>
using namespace std;
int main()
{
    int t;
    string ch;
    cin>>t;
    while(t--)
    {
        cin>>ch;
        if(ch=="b" || ch=="B")
            cout<<"BattleShip"<<endl;
        else if(ch=="c" || ch=="C")
            cout<<"Cruiser"<<endl;
        else if(ch=="d" || ch=="D")
            cout<<"Destroyer"<<endl;
        else 
            if(ch=="F" || ch=="f")
                cout<<"Frigate"<<endl;
    }
}