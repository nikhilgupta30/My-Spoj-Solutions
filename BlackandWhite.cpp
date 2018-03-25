#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	while(1){
		string s,t;
		cin>>s>>t;
		if(s=="*" && t=="*"){
			break;
		}
		int ans=0;
		for(int i=0;i<s.size();i++){
			for(int j=i;j<s.size();j++){
				if(s[j]==t[j]){
					if(j!=i){
						ans++;
					}
					i = j;
					break;
				}
				if(j==s.size()-1){
				    i=j;
				    ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	
    return 0;
} 
