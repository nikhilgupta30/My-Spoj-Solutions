#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	int prev=0;
	int score1 =0,score2=0;
	int sec1=0,sec2=0;
 
	int n;
	cin>>n;
 
	while(n--){
		int team;
		string str;
		cin>>team>>str;
		int curr = ( (str[0]-'0')*10 + (str[1]-'0') )*60 + (str[3]-'0')*10 + (str[4]-'0');
 
		if(score1 > score2){
			sec1 += (curr-prev);
		}
		else if(score1 < score2){
			sec2 += (curr-prev);
		}
 
		prev = curr;
 
		if(team==1){
			score1++;
		}
		else{
			score2++;
		}
	}
 
	if(score1 > score2){
		sec1 += (48*60 -prev);
	}
	else if(score1 < score2){
		sec2 += (48*60 -prev);
	}
 
	cout<<(sec1/600)<<((sec1/60)%10)<<":"<<((sec1%60)/10)<<((sec1%60)%10)<<endl;
	cout<<(sec2/600)<<((sec2/60)%10)<<":"<<((sec2%60)/10)<<((sec2%60)%10)<<endl;
 
	return 0;
} 
