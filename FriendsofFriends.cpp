#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	unordered_set<int> temp;
	vector<int> f(n);
	
	for(int i=0;i<n;i++){
		cin>>f[i];
		int m;
		cin>>m;
		for(int j=0;j<m;j++){
			int ff;
			cin>>ff;
			temp.insert(ff);
		}
	}
	
	int del=0;
	for(int i=0;i<n;i++){
		if(temp.find(f[i])!=temp.end()){
			del++;
		}
	}
	
	cout<<temp.size()-del;
	
	return 0;
}
 
