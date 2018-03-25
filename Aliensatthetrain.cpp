#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long t;
	cin>>t;
	
	while(t--){
		
		long a,b;
		cin>>a>>b;
		list<int> q;
		
		vector<long> num(a);
		for(long i=0;i<a;i++){
			cin>>num[i];
		}
		
		int ans=INT_MIN;
		int temp=0;
		long long sum=0;
		long long anssum=0;
		int done=0;
		for(int i=0;i<a;i++){
			for(int j=i;j<a;j++){
				q.push_back(num[j]);
				sum += num[j];
				temp++;
				if(sum>b){
					i=j;
					break;
				}
				else if(j==a-1){
					done=1;
				}
			}
			
			if(done==1){
				if(temp>ans){
					ans = temp;
					anssum = sum;
				}
				else if(temp==ans && sum<anssum){
					anssum = sum;
				}
				break;
			}
			else{
				if(ans<temp-1){
					ans = temp-1;
					anssum = sum-num[i];
				}
				else if(ans==temp-1 && anssum>sum-num[i]){
					anssum = sum-num[i];
				}
				
				while(sum>b){
					sum -= q.front();
					temp--;
					q.pop_front();
				}
				
			}
		}
		cout<<anssum<<" "<<ans<<endl;
	}
	
	return 0;
}
