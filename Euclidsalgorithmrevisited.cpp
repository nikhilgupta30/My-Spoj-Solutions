#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll mod = 1000000007;
 
void multiply(ll F[2][2], ll M[2][2]){
 
	ll x =  ((F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod)%mod;
	ll y =  ((F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod)%mod;
	ll z =  ((F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod)%mod;
	ll w =  ((F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod)%mod;
	
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}
 
void power(ll F[2][2], ll n){
	if( n == 0 || n == 1)
    	return;
  	ll M[2][2] = {{1,1},{1,0}};
 
 	power(F, n/2);
  	multiply(F, F);
 
  	if (n%2 != 0)
     	multiply(F, M);
}
 
ll fib(ll n){
	ll F[2][2] = {{1,1},{1,0}};
	if (n == 0)
		return 0;
	power(F, n-1);
	return F[0][0];
}
 
int main() {
 
	ll t;
	cin>>t;
 
	while(t--){
		ll n;
		cin>>n;
		if(n==0)printf("0\n");
        else if(n==1)printf("2\n");
        else printf("%lld\n",(fib(n+3))%mod);
	}
 
	return 0;
}
