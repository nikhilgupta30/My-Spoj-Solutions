#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> value(k+1,0);
		
		for(int i=1;i<=k;i++){
			cin>>value[i];
		}
		
		vector<int> dp(k+1,-1);
		for(int i=1;i<=k;i++){
			vector<int> temp;
			if(value[i]!=-1){
				temp.push_back(value[i]);
				//cout<<temp[0]<<" ";
			}
			for(int j=i-1;j>0;j--){
				if(dp[j]!=-1 && value[i-j]!=-1){
					temp.push_back(dp[j]+value[i-j]);
				}
			}
			/*for(int j=1;j<temp.size();j++){
				cout<<temp[j]<<" ";
			}
			cout<<endl;*/
			if(temp.size()>0){
				dp[i] = temp[0];
				for(int j=1;j<temp.size();j++){
					if(temp[j]<dp[i]){
						dp[i] = temp[j];
					}
				}
			}
		}
		cout<<dp[k]<<endl;
	}
	
	return 0;
} 

