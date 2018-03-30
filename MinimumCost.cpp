#include<iostream>
 
using namespace std;
 
int maxseq(string s,string t,int m,int n){
	int maxs[m+1][n+1];
	
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0||j==0){
				maxs[i][j]=0;
			}
			else if(s[i-1]==t[j-1]){
				maxs[i][j] = maxs[i-1][j-1] +1;
			}
			else{
				maxs[i][j] = max(maxs[i][j-1],maxs[i-1][j]);
			}
		}
	}
	
	return maxs[m][n];
	
}
 
int main(){
	
	string s,t;
	while(1){
		cin>>s;
		if(s.size()==1&&s[0]=='#')
			break;
		
		cin>>t;
		
		int length = maxseq(s,t,s.size(),t.size());
		
		long cost = (s.size()-length)*15+(t.size()-length)*30;
		cout<<cost<<endl;
		
	}
	
	return 0;
}
