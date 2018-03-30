#include<bits/stdc++.h>
 
using namespace std;
 
long ans(int W,int n,vector<int> wt,vector<int> val){
	
	long dp[n+1][W+1];
	
	for(int i=0;i<=n;i++){
		for(int w=0;w<=W;w++){
			if(i==0 || w==0){
				dp[i][w]=0;
			}
			else if(wt[i-1]<=w){
				dp[i][w] = max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
			}
			else{
				dp[i][w] = dp[i-1][w];
			}
		}
	}
	
	return dp[n][W];
	
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int W,n;
		cin>>W>>n;
		
		vector<int> wt(n);
		vector<int> val(n);
		
		for(int i=0;i<n;i++){
			cin>>wt[i]>>val[i]; 
		}
		
		cout<<"Hey stupid robber, you can get ";
		cout<<ans(W,n,wt,val);
		cout<<"."<<endl;		
		
	}
	
	return 0;
} 
