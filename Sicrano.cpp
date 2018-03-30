#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,m;
		cin>>n>>m;
		
		vector< pair<int,int> > points(n);
		
		for(int i=0;i<n;i++){
			cin>>points[i].first;
			cin>>points[i].second;
		}
		
		vector< vector<int> > seg(m);
		int x1,y1,x2,y2;
		
		for(int i=0;i<m;i++){
			cin>>x1>>y1>>x2>>y2;
			double d = sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
			int ans=0;
			for(int j=0;j<n;j++){	
				double d1 = sqrt((y2-points[j].second)*(y2-points[j].second)+(x2-points[j].first)*(x2-points[j].first));
				double d2 = sqrt((points[j].second-y1)*(points[j].second-y1)+(points[j].first-x1)*(points[j].first-x1));
				double test = d - d1 - d2;
				if(test<0.00001 && test>-0.00001){
					ans++;
				}
			}
			cout<<ans<<endl;
		}
	}
	
	return 0;
} 
