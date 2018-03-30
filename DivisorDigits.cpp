#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	string s;
	
	while(cin>>s){
		vector<int> div(10,0);
		vector<int> seven(6);
		seven[0] = 1;
		seven[1] = 3;
		seven[2] = 2;
		seven[3] = 6;
		seven[4] = 4;
		seven[5] = 5;
		int sum=0;
		int sum7=0;
		//1
		div[1] = 1;
		//2
		int two = s[s.size()-1] - '0';
		if(two%2==0){
			div[2] = 1;
		}
		//3
		for(int i=0;i<s.size();i++){
			sum += (s[i]-'0');
		}
		if(sum%3==0){
			div[3] = 1;
		}
		//4
		int four = two;
		if(div[2]==1){
			if(s.size()>1){
				four += 10*(s[s.size()-2]-'0');
			}
			if(four%4==0){
				div[4]=1;
			}
		}
		//5
		if(two==0 || two==5){
			div[5] = 1;
		}
		//6
		if(div[2]==1 && div[3]==1){
			div[6]=1;
		}
		//7
		for(int i=s.size()-1;i>=0;i--){
			int temp = s.size()-1-i;
			temp = temp%6;
			sum7 += (s[i]-'0')*seven[temp];
		}
		if(sum7%7==0){
			div[7]=1;
		}
		//8
		int eight=four;
		if(div[4]==1){
			if(s.size()>2){
				eight += 100*(s[s.size()-3]-'0');
			}
			if(eight%8==0){
				div[8]=1;
			}
		}
		//9
		if(sum%9==0){
			div[9]=1;
		}
		int ans=0;
		for(int i=0;i<s.size();i++){
			if(div[s[i]-'0']==1){
				ans++;
			}
		}
		/*for(int i=0;i<10;i++){
			cout<<div[i]<<" ";
		}*/
		//cout<<endl;
		cout<<ans<<endl;
	}
	
	return 0;
}
