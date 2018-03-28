#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,k;
	cin>>n>>k;
	int l,r;
	vector<int> plus(n+1,0);
	
	for(int i=0;i<k;i++){
		cin>>l>>r;
		plus[l-1]++;
		plus[r]--;
	}
	
	vector<int> arr(n);
	long temp=0;
	for(int i=0;i<n;i++){
		temp += plus[i];
		arr[i] = temp;
	}
	
	sort(arr.begin(),arr.end());
	/*
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}*/
	
	cout<<arr[n/2];
	
	return 0;
} 
