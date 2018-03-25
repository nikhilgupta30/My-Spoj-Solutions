#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	
	vector<long long> zero(n);
	zero[0] = 1;
	vector<long long> one(n);
	one[0] = 1;
	vector<long long> two(n);
	two[0] = 1;
	
	for(int i=1;i<n;i++){
		zero[i] = zero[i-1] + one[i-1];
		one[i] = one[i-1] + zero[i-1] + two[i-1];
		two[i] = two[i-1] + one[i-1];
	}
	
	long long ans = zero[n-1] + one[n-1] + two[n-1];
	cout<<ans;
	
	return 0;
} 
