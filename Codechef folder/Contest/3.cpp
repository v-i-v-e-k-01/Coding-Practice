#include <iostream>
using namespace std;

int main() {
	int t,a,b,temp;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a<b)
	        swap(a,b);
	    if(a==b ){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    temp=a%b;
	    if(temp%2==0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
