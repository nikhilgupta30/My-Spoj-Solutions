#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	scanf("%d",&t);//cin>>t;
	
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);//cin>>n>>m;
		vector<int> money(n);
		
		for(int i=0;i<n;i++)
			scanf("%d",&money[i]);//cin>>money[i];
		
		sort(money.begin(),money.end());
		
		int i=0,j=n-1;
		int ans=0;
		while(i<j){
			if(money[i]+money[j]==m){
				ans++;
				i++;
			}
			else if(money[i]+money[j]<m){
				i++;
			}
			else{
				j--;
			}
		}
		
		printf("%d\n",ans);//cout<<ans<<endl;
		
	}
	
	return 0;
} 
