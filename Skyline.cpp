#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	ll arr[1005][1005] = {{0}};
 
	for(ll i=0;i<1005;i++){
		for(ll j=0;j<=i;j++){
			if(j==0){
				arr[i][j] = 1;
			}
			else{
				arr[i][j] = (arr[i-1][j] + arr[i][j-1])%1000000;
			}
		}
	}
 
	while(1){
		ll n;
		cin>>n;
		if(n==0){
			break;
		}
		cout<<arr[n][n]<<endl;
	}
 
	return 0;
} 

