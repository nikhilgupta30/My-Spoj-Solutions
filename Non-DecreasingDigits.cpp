#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int q;
	cin>>q;
	
	while(q--){
		int t,n;
		cin>>t>>n;
		long long ans=0;
		if(n==1){
			ans = 10;
		}
		else{
			long long dp[10][n];
			for(int i=0;i<10;i++){
				dp[i][0] = 1;
			}
			
			for(long long i=1;i<n;i++){
				dp[0][i] = dp[0][i-1];
				
				for(int j=1;j<10;j++){
					dp[j][i] = dp[j][i-1] + dp[j-1][i];
				}
			}
			
			for(int i=0;i<10;i++){
				ans += dp[i][n-1];
			}
			
		}
		
		cout<<t<<" "<<ans<<"\n";
	}
	
	return 0;
}
