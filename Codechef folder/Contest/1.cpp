#include <iostream>
using namespace std;

int main() {
	int t,x,n;
	cin>>t;
	while(t--){
	    cin>>x;
	    n=((x*60)-5)/30;
	    cout<<n+1<<endl;
	}
	return 0;
}