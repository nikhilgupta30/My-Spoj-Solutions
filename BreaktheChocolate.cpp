#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long t;
	cin>>t;
	for(long long q=1;q<=t;q++){
		long long l,b,h;
		cin>>l>>b>>h;
		//cout<<l<<b<<h<<endl;
		cout<<"Case #"<<q<<": ";
		long long ans = ceil(log2 (double(l))) + ceil(log2 (double(b))) + ceil(log2 (double(h)));
		long long ans2 = (l*b*h) - 1;
		cout<<ans2<<" "<<ans<<endl;
	}
	
	return 0;
} 
