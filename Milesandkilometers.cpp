#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	ll fib[81];
	fib[0] = 0;
	fib[1] = 1;
	for(ll i=2;i<=80;i++){
		fib[i] = fib[i-1]+fib[i-2];
	}
 
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans=0;
		for(ll i=79;i>0;i--){
			if(n >= fib[i]){
				ans += fib[i+1];
				n -= fib[i];
			}
			if(n==0){
				break;
			}
		}
		cout<<ans<<endl;
	}
 
    return 0;
} 
