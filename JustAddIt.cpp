#include<bits/stdc++.h>
 
using namespace std;
 
long long mod = 10000007;
 
long long power(long long a,long long b){
	if(b==0){
		return 1;
	}
	
	long long ans = (power(a,b/2))%mod;
	ans = (ans*ans)%mod;
	
	if(b&1){
		ans = (ans*a)%mod;
	}
	
	return ans;
	
}
 
 
int main(){
	
	while(1){
		long long n,k;
		cin>>n>>k;
		if(n==0 && k==0){
			break;
		}
		
		long long ans = (2*((power(n-1,n-1) +power(n-1,k))%mod))%mod;
		ans = (ans + power(n,n))%mod;
		ans = (ans + power(n,k))%mod;
		
		printf("%lld\n",ans);
		
	}
	
	return 0;
} 
