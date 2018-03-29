#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	long long int mod = 1000000007;
	for(int q=0;q<t;q++){
		int n;
		cin>>n;
		vector<int> maxnum(n);
		
		for(int i=0;i<n;i++){
			cin>>maxnum[i];
		}
		
		sort(maxnum.begin(),maxnum.end());
		
		int impossible=0;
		long long int ans=1;
		
		for(int i=0;i<n;i++){
			if(maxnum[i]-i<=0){
				impossible=1;
				break;
			}
			ans = ans*(maxnum[i]-i);
			ans %= mod;
		}
		
		if(impossible){
			cout<<0;
		}
		else{
			cout<<ans;
		}
		
		cout<<endl;
		
	}
	
	cout<<"KILL BATMAN";
	
	return 0;
}
