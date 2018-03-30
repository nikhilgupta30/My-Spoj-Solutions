#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	string s;
	ll t=1;
	while(cin>>s){
		
		ll ans=0;
		vector<ll> pos;
		for(ll i=0;i<s.size();i++){
			if(s[i]=='1'){
				pos.push_back(i);
			}
		}
 
		if(pos.size()==0){
			ans=0;
		}
		else if(pos.size()==1){
			//cout<<"ok";
			if(pos[0]==s.size()-1){
				ans=1;
			}
 
			else{
				ans=2;
			}
		}
		else{
			if(pos[0]==pos[1]-1){
				//cout<<"ok";
				ans=1;
			}
			else{
				ans=2;
			}
 
			for(ll i=1;i<pos.size()-1;i++){
				if(ans&1 && (pos[i+1]-pos[i]>1)){
					ans++;
				}
				else if(ans%2==0 && (pos[i]==pos[i+1]-1)){
					ans++;
				}
				else if(ans%2==0 && (pos[i+1]-pos[i]>1)){
					ans += 2;
				}
			}
 
			if(pos[pos.size()-1]==s.size()-1){
				//cout<<"ok1";
				if(ans%2==0){
					ans++;
				}
			}
			else{
				if(ans&1){
					ans++;
				}
				else{
					ans += 2;
				}
			}
		}
 
		cout<<"Game #"<<t<<": "<<ans<<"\n";
		t++;
	}
 
    return 0;
} 
