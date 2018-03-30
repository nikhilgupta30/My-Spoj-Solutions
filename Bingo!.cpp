#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	while(true){
		int n,b;
		cin>>n>>b;
		if(n==0 && b==0){
			break;
		}
 
		int arr[b];
		for(int i=0;i<b;i++){
			cin>>arr[i];
		}
 
		int y=1;
		unordered_set<int> unset;
		for(int i=0;i<b;i++){
			for(int j=i;j<b;j++){
				unset.insert(abs(arr[i]-arr[j]));
			}
		}
		if(unset.size()<n+1){
			y=0;
		}
 
		if(y){
			cout<<"Y\n";
		}
		else{
			cout<<"N\n";
		}
	}
 
 
	return 0;
}
