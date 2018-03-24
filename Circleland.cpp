#include<bits/stdc++.h>
 
using namespace std;
 
long long min(long long a,long long b){
	if(a<b)
		return a;
	else
		return b;
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		vector<int> length(n);
		long  long total = 0;
		
		for(int i=0;i<n;i++){
			cin>>length[i];
			total += length[i];
		}
		
		vector<int> prefix;
		prefix.push_back(0);
		
		for(int i=0;i<n;i++){
			prefix.push_back(prefix[prefix.size()-1]+length[i]);
		}
		
		long long ans = total-length[0];
		//cout<<ans<<" ";
		long long temp = total-length[n-1];
		//cout<<temp<<" ";
		if(temp<ans)
			ans = temp;
		
		for(int i=1;i<n-1;i++){
			temp = total - length[i] + min(prefix[i],total - prefix[i+1]);
			//cout<<temp<<" ";
			if(temp < ans)
				ans = temp;
		}
		//cout<<endl;
		cout<<ans<<endl;
		
	}
	
	return 0;
}
