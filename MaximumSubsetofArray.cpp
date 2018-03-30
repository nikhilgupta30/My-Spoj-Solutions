#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
ll mod = 1000000009;
 
int main(){
 
	int t;
	cin>>t;
 
	while(t--){
		
		ll n;
		cin>>n;
 
		std::vector<ll> arr(n);
 
		int allNeg = 1;
		ll nOf0 = 1;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>0){
				allNeg = 0;
			}
			if(arr[i]==0){
				nOf0 <<= 1;
				nOf0 %= mod;
			}
		}		
 
		if(allNeg == 1){
			ll maximum = arr[0];
			for(ll i=1;i<n;i++){
				if(maximum < arr[i]){
					maximum = arr[i];
				}
			}
 
			if(maximum == 0){
				cout<<maximum<<" "<<nOf0-1<<"\n";
			}
			else{
				ll count=0;
				for(ll i=1;i<n;i++){
					if(maximum == arr[i]){
						count++;
					}
				}
 
				cout<<maximum<<" "<<count<<"\n";
			}
		}
		else{
			ll sum = 0;
			for(ll i=0;i<n;i++){
				if(arr[i]>0){
					sum += arr[i];
				}
			}
 
			cout<<sum<<" "<<nOf0<<"\n";
		}
	}
 
	return 0;
} 
