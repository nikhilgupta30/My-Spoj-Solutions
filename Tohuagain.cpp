#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long t;
	cin>>t;
	
	while(t--){
		set<char> store;
		for(int i=0;i<99;i++){
			int n;
			char ch;
			cin>>n>>ch;
			if(n<=81 && n%9==0){
				store.insert(ch);
			}
		}
		
		if(store.size()==1){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		
	}
	
	
	return 0;
}
