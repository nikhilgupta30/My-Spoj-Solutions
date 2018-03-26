#include<bits/stdc++.h>
 
using namespace std;
 
// Driver program to test above functions
int main(){
 
	while(1){
		int m,n;
		cin>>m>>n;
		if(m==0 && n==0){
			break;
		}
		vector<int> val;
		
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			n -= a;
			val.push_back(b-a);
		}
		
		int dp[n+1][m];
		
		for(int i=0;i<=n;i++){
			for(int j=0;j<m;j++){
				if(i==0){
					dp[i][j]=1;
				}
				else if(j==0){
					if(val[0]>=i){
						dp[i][j]=1;
					}
					else{
						dp[i][j]=0;
					}
				}
				else{
					dp[i][j]=0;
					for(int k=i;k>=i-val[j];k--){
						if(k<0){
							break;
						}
						dp[i][j] += dp[k][j-1];
					}
				}
			}
		}
		cout<<dp[n][m-1]<<endl;
	}
	
    return 0;
} 
