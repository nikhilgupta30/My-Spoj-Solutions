#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	vector<int> num;
	num.push_back(2);
	num.push_back(4);
	num.push_back(9);
	num.push_back(16);
	num.push_back(25);
	num.push_back(64);
	num.push_back(289);
	num.push_back(729);
	num.push_back(1681);
	num.push_back(2401);
	num.push_back(3481);
	num.push_back(4096);
	num.push_back(5041);
	num.push_back(7921);
	num.push_back(10201);			
	num.push_back(15625);				
	num.push_back(17161);				
	num.push_back(27889);
	num.push_back(28561);
	num.push_back(29929);
	num.push_back(65536);
	num.push_back(83521);
	num.push_back(85849);
	num.push_back(146689);
	num.push_back(262144);
	num.push_back(279841);
	num.push_back(458329);
	num.push_back(491401);
	num.push_back(531441);
	num.push_back(552049);
	num.push_back(579121);
	num.push_back(597529);
	num.push_back(683929);
	num.push_back(703921);
	num.push_back(707281);
	num.push_back(734449);
	num.push_back(829921);
	
	
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans=0;
		for(int i=0;i<num.size();i++){
			if(num[i]>=a && num[i]<=b)
				ans++;
		}
		cout<<ans<<endl;
		
	}
	
	return 0;
} 
