#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int arr[n][3];
		cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
		
		for(int i=1;i<n;i++){
			cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
			arr[i][0] += min(arr[i-1][1],arr[i-1][2]);
			arr[i][1] += min(arr[i-1][0],arr[i-1][2]);
			arr[i][2] += min(arr[i-1][1],arr[i-1][0]);
		}
		
		cout<<min(arr[n-1][0],min(arr[n-1][1],arr[n-1][2]))<<endl;
		
	}
	
	return 0;
} 
