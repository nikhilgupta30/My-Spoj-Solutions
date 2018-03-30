#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll ans=0;
 
void findAns(vector<vector<ll> > arr,ll n,ll i,ll j){
	if(i==n-1 && j==n-1){
		ans++;
		return;
	}
	
	if(i>=n || j>=n || arr[i][j]==0){
		return;
	}
 
	findAns(arr,n,i+arr[i][j],j);
	findAns(arr,n,i,j+arr[i][j]);
	
}
 
int main(){
 
	ll n;
	cin>>n;
 
	vector<vector<ll> > arr(n);
 
	for(ll i=0;i<n;i++){
		string temp;
		cin>>temp;
		for(ll j=0;j<n;j++){
			arr[i].push_back(temp[j]-'0');
		}
	}
 
	findAns(arr,n,0,0);
	cout<<ans;
 
	return 0;
} 
