#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int e,f;
		cin>>e>>f;
		int n;
		cin>>n;
		vector< pair<int,int> > coins;
		for(int i=0;i<n;i++){
			int p,w;
			cin>>p>>w;
			coins.push_back(make_pair(p,w));
		}
		int w=f-e;
		long *allw = new long[w+1];
		allw[0] = 0;
		for(int i=1;i<=w;i++){
			vector<long> temp; 
			for(int j=0;j<n;j++){
				if(i-coins[j].second == 0){
					temp.push_back(allw[i-coins[j].second]+coins[j].first);
				}
				else if((i-coins[j].second >= 0 ) && (allw[i-coins[j].second]!=0)){
					temp.push_back(allw[i-coins[j].second]+coins[j].first);
				}
			}
		
			if(temp.size()==0){
				allw[i]=0;
			}
			else{
				long minval=temp[0];
				for(int j=1;j<temp.size();j++){
					if(minval>temp[j])
						minval = temp[j];
				}
				allw[i] = minval;
			}
		}
		if(allw[w]!=0){
			cout<<"The minimum amount of money in the piggy-bank is "<<allw[w]<<".";
		}
		else{
			cout<<"This is impossible.";
		}
		cout<<endl;
		
	}
	
	return 0;
}
