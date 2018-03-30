#include<bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		if(n==1){
			cout<<3;
		}
		else if(n==2){
			cout<<9;
		}
		else{
			long long arr[9][n+1];
			
			for(int i=0;i<9;i++){
				arr[i][2]=1;
			}
			
			for(int i=3;i<=n;i++){
					
				for(int j=0;j<9;j++){
					arr[j][i]=0;
				}
				
				arr[0][i] = arr[0][i-1] + arr[3][i-1] + arr[6][i-1];
				arr[1][i] = arr[0][i-1] + arr[3][i-1];
				arr[2][i] = arr[0][i-1] + arr[6][i-1];
				arr[3][i] = arr[1][i-1] + arr[4][i-1];
				arr[4][i] = arr[1][i-1] + arr[4][i-1] + arr[7][i-1];
				arr[5][i] = arr[4][i-1] + arr[7][i-1];
				arr[6][i] = arr[2][i-1] + arr[8][i-1];
				arr[7][i] = arr[5][i-1] + arr[8][i-1];
				arr[8][i] = arr[2][i-1] + arr[5][i-1] + arr[8][i-1];
				
			}
			
			long long ans=0;
			for(int i=0;i<9;i++){
				ans += arr[i][n];
			}
			cout<<ans;		
		}
		cout<<"\n";
		
	}
	
	return 0;
}
