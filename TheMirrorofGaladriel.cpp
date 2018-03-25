#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int q;
	cin>>q;
	
	for(int t=0;t<q;t++){
		string s;
		cin>>s;
		
		int i=0,j=s.size()-1;
		
		int yes=1;
		while(i<=j){
			if(s[i]!=s[j]){
				yes=0;
				break;
			}
			i++;
			j--;
		}
		
		if(yes==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	
	return 0;
} 
