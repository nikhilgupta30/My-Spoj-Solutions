#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
 
int main(){
 
	ll n;
	cin>>n;
 
	vector<ll> arr(n);
	vector<ll> diff(n-1);
 
	cin>>arr[0];
	for(ll i=1;i<n;i++){
		cin>>arr[i];
	}
 
	sort(arr.begin(),arr.end());
	for(ll i=0;i<n-1;i++){
		diff[i] = arr[i+1] - arr[i];
	}
 
	ll hcf = gcd(diff[0],diff[1]);
 
	for(ll i=2;i<n-1;i++){
		hcf = gcd(diff[i],hcf);
		if(hcf==1){
			break;
		}
	}
 
	ll ans=0;
	for(ll i=0;i<n-1;i++){
		ans = ans+ (diff[i]-1)/hcf;
	}
 
	cout<<ans;
 
	return 0;
} 
