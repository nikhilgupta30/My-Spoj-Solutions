#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	ll r,b;
	cin>>r>>b;
 
	ll l = ( r+4+ sqrt(r*r + 8*r - 16*(r+b-1)) )/4;
	ll w = r/2 + 2 - l;
 
	cout<<l<<" "<<w;
	
 
	return 0;
} 
