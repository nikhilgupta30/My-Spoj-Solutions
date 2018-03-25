#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	vector<long long> dp(51);
	dp[0] = 1;
	dp[1] = 2;
		
	for(long i=2;i<=50;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	
	return 0;
} 
