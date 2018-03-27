#include<bits/stdc++.h>
 
using namespace std;
 
long long mod = 1000000007;
 
void multiply(long long F[2][2], long long M[2][2]){
	
	long long x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%mod;
	long long y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%mod;
	long long z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%mod;
	long long w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%mod;
	
	if(x<0){
		x += mod;
	}
	if(y<0){
		y += mod;
	}
	if(z<0){
		z += mod;
	}
	if(w<0){
		w += mod;
	}
	
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}
 
void power(long long F[2][2], long long n){
	if( n == 0 || n == 1)
		return;
	long long M[2][2] = {{1,1},{1,0}};
	 
	power(F, n/2);
	multiply(F, F);
	 
	if (n%2 != 0)
		multiply(F, M);
}
 
long long fib(int n){
	
	long long F[2][2] = {{1,1},{1,0}};
	if (n == 0)
		return 0;
	power(F, n-1);
	return F[0][0];
 
}
 
int main()
{	
    int t;
    scanf("%d",&t);
    for(int q=1;q<=t;q++){
		long long m,n;
		cin>>n>>m;
		//cout<<fib(n+2);
		//cout<<fib(m+2);
		long long ans = (fib(m+2)-fib(n+1))%mod;
		if(ans<0)
		    ans += mod;
		cout<<ans;
		cout<<endl;
    }
    return 0;
} 
