#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	
	vector<int> stk(n);
	
	for(int i=0;i<n;i++){
		cin>>stk[i];
	}
	
	int curr=n;
	for(int i=stk.size()-1;i>=0;i--){
		for(int j=i;j>=0;j--){
			if(stk[j]==curr){
				i=j;
				curr--;
				break;
			}
		}
	}
	
	cout<<curr;
	
	return 0;
}
