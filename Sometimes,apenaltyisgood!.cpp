#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	while(1){
		ll g,t,a,d;
		cin>>g>>t>>a>>d;
		if(g==-1){
			break;
		}
		ll total = g*a + d;
		ll power2=1;
		while(power2<total){
			power2 <<= 1;
		}
		ll y = power2 - total;
		ll x = power2-1;
		x += g*t*(t-1)/2;
		cout<<g<<"*"<<a<<"/"<<t<<"+"<<d<<"="<<x<<"+"<<y<<endl;
	}
 
	return 0;
} 
