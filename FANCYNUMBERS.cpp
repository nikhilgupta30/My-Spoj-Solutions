#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		long long ans=1;
		for(int i=0;i<s.size();i++){
			long long multiplier=1;
			for(int j=i+1;j<s.size();j++){
				if(s[j]!=s[i]){
					i = j-1;
					ans *= multiplier;
					break;
				}
				multiplier = multiplier<<1;
				if(j==s.size()-1){
					ans *= multiplier;
					i=j;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
	
}
