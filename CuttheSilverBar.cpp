#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	while(1){
		long long n;
		cin>>n;
		if(n==0){
			break;
		}
		
		long long ans = log(n)/log(2);
		cout<<ans<<"\n";
		
	}
	
	return 0;
} 
