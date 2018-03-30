#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	for(int q=1;q<=t;q++){
		
		int n,p;
		cin>>n>>p;
		int status[n][p];
		int ans1=1;
		int ans2=1;
		int ans3=1;
		int *que = new int[p]();
		
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=0;j<p;j++){
				cin>>status[i][j];
				if(status[i][j]==1){
					count++;
					que[j]=1;
				}
				
			}
			if(count==p){
				ans3=0;
			}
			if(count==0){
				ans2=0;
			}
		}
		
		for(int i=0;i<p;i++){
			if(que[i]==0){
				ans1=0;
			}
		}
		
		int ans = 4*ans1 + 2*ans2 + ans3;
		cout<<"Case "<<q<<": "<<ans<<endl;
		
	}
	
	return 0;
}
