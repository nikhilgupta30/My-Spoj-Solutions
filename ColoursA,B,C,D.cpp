#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long n;
	cin>>n;
	
	string str;
	cin>>str;
	
	char ch1 = str[0],ch2 = str[1];
	
	vector<char> ans(2*n);
	
	if((ch1=='A'&&ch2=='B')||(ch1=='B'&&ch2=='A')){
		ans[0] = 'C'; ans[1] = 'D';
	}
	else if((ch1=='A'&&ch2=='C')||(ch1=='C'&&ch2=='A')){
		ans[0] = 'B'; ans[1] = 'D';
	}
	else if((ch1=='A'&&ch2=='D')||(ch1=='D'&&ch2=='A')){
		ans[0] = 'B'; ans[1] = 'C';
	}
	else if((ch1=='B'&&ch2=='C')||(ch1=='C'&&ch2=='B')){
		ans[0] = 'A'; ans[1] = 'D';
	}
	else if((ch1=='B'&&ch2=='D')||(ch1=='D'&&ch2=='B')){
		ans[0] = 'A'; ans[1] = 'C';
	}
	else if((ch1=='C'&&ch2=='D')||(ch1=='D'&&ch2=='C')){
		ans[0] = 'A'; ans[1] = 'B';
	}
	
		cout<<ans[0]<<ans[1];
	
	for(long long i=2;i<str.size();i=i+2){
		ch1 = str[i]; ch2 = str[i+1];
		
		if((ch1=='A'&&ch2=='B')||(ch1=='B'&&ch2=='A')){
		ans[i] = 'C'; ans[i+1] = 'D';
		}
		else if((ch1=='A'&&ch2=='C')||(ch1=='C'&&ch2=='A')){
			ans[i] = 'B'; ans[i+1] = 'D';
		}
		else if((ch1=='A'&&ch2=='D')||(ch1=='D'&&ch2=='A')){
			ans[i] = 'B'; ans[i+1] = 'C';
		}
		else if((ch1=='B'&&ch2=='C')||(ch1=='C'&&ch2=='B')){
			ans[i] = 'A'; ans[i+1] = 'D';
		}
		else if((ch1=='B'&&ch2=='D')||(ch1=='D'&&ch2=='B')){
			ans[i] = 'A'; ans[i+1] = 'C';
		}
		else if((ch1=='C'&&ch2=='D')||(ch1=='D'&&ch2=='C')){
			ans[i] = 'A'; ans[i+1] = 'B';
		}
		
		if(ans[i] == ans[i-1]){
			swap(ans[i],ans[i+1]);
		}
		cout<<ans[i]<<ans[i+1];
	}
	
	return 0;
} 
