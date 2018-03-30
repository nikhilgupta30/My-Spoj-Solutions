#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	vector<int> series;
	series.push_back(0);
	series.push_back(1);
	int index=1;
	while(series.size()<1000001){
		int number = series[series.size()-1]+1;
		int times = series[index];
		for(int i=0;i<times;i++){
			series.push_back(number);
		}
		index++;
	}
	
	int t;
	cin>>t;
	for(int q=1;q<=t;q++){
		int n;
		cin>>n;
		cout<<"Case #"<<q<<": "<<series[n]<<endl;
	}
	
	return 0;
}
