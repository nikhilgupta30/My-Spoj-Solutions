#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long t;
	cin>>t;
	
	while(t--){
		long long n;
		cin>>n;
		
		int done=0;
		
		long long test=1;
		long long ans1,ans2=0;
		
		while(1){
			if(test==n){
				ans1 = n;
				done=1;
				break;
			}
			else if(test>n){
				ans1 = test;
				break;
			}
			else{
				test = test<<1;
			}
		}
		
		if(done==0){
			long long temp = ans1/2;
			ans2++;
			long long left = n - temp;
			
			while(left>0){
				if(temp == left){
					break;
				}
				else if(temp > left){
					temp /= 2;
					ans2++;
				}
				else{
					left -= temp;
				}
			}
			
		}
		
		cout<<ans1<<" "<<ans2<<"\n";
		
	}
	
	return 0;
} 
