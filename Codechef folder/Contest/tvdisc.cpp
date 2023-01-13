//TVDISC
#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a-c < b-d)
	        cout<<"FIRST"<<endl;
	    else if (a-c > b-d)
	        cout<<"SECOND"<<endl;
	    else
	        cout<<"ANY"<<endl;
	}
}
