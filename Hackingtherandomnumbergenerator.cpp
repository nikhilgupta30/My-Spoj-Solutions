#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long n,k;
	cin>>n>>k;
	vector<long long> num(n);
	
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	sort(num.begin(),num.end());
	
	long long i=0,j=0;
	long long ans=0;
	
	while(i<n && j<n){
		if(num[j]-num[i]==k){
			ans++;
			i++;
			j++;
		}
		else if(num[j]-num[i]>k){
			i++;
		}
		else{
			j++;
		}
	}
	cout<<ans;
	
	return 0;
}
