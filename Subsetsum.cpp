#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
long long totalSubsetSum(std::vector<int> arr,int subset[100001],int n){
	unordered_set<int> subsetsums({0});
    
    for (int i = 0; i < n; ++i) {
        int* temp = subset;
        for(int x: subsetsums)
            *(temp++) = x + arr[i];
        subsetsums.insert(subset, temp);
    }
 
    return accumulate(subsetsums.begin(), subsetsums.end(), 0);
 
}
 
 
int main(){
 
	int t;
	cin>>t;
 
	while(t--){
		int n;
		cin>>n;
 
		std::vector<int> arr(n);
		int subset[100001];
 
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
 
		cout<<totalSubsetSum(arr,subset,n)<<"\n";
 
	}
 
	return 0;
} 
