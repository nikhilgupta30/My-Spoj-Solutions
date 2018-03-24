#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		vector<int> alt1(n);
		for(int i=0;i<n;i++){
			cin>>alt1[i];
		}
		int m;
		cin>>m;
		int temp;
		int ans = INT_MAX;
		for(int i=0;i<m;i++){
			cin>>temp;
			for(int j=0;j<n;j++){
				int temp2 = temp - alt1[j];
				if(temp2<0)
					temp2 *= -1;
				if(temp2<ans)
					ans = temp2;
			}
		}
		
		cout<<ans<<endl;
		
	}
	
	return 0;
}
