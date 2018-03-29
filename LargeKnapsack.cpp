#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int W,n;
	scanf("%d%d",&W,&n);//cin>>W>>n;
	
	vector<int> wt(n);
	vector<int> val(n);
	
	for(int i=0;i<n;i++){
		scanf("%d%d",&val[i],&wt[i]);//cin>>val[i]>>wt[i];
	}
	
	//cout<<knapsack(W,n,wt,val);
	int maxval[n+1][W+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
			if(i==0||j==0){
				maxval[i][j] = 0;
			}
			else if(wt[i-1]<=j){
				maxval[i][j] = max( val[i-1]+maxval[i-1][j-wt[i-1]] ,maxval[i-1][j]);
			}
			else{
				maxval[i][j] = maxval[i-1][j];
			}
		}
	}
	printf("%d",maxval[n][W]);//cout<<maxval[n][W];
	
	return 0;
}
