#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	vector<ll> seive(1000001,0);
 
	for(ll i=2;i<=1000000;i++){
		if(seive[i]==0){
			for(ll j=i;j<=1000000;j=j+i){
				seive[j]++;
			}
		}
	}
	
	ll store[11][1000001];
 
	for(ll i=0;i<11;i++){
		store[i][0] = 0;
	}
 
	for(ll j=1;j<=1000000;j++){
		for(ll i=0;i<11;i++){
			if(i == seive[j]){
				store[i][j] = store[i][j-1]+1;
			}
			else{
				store[i][j] = store[i][j-1];
			}
		}
	}
 
	ll t;
	cin>>t;
 
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
 
		ll ans=0;
		ans = store[n][b] - store[n][a-1];
		cout<<ans<<endl;
	}
	
 
	return 0;
} 
