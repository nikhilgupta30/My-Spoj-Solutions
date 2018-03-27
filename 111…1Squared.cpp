#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long n;
	while(cin>>n){
		if(n<10){
			printf("%lld\n",n*n);
			continue;
		}
		long long t=((n-10)/9)+1;
		long long k=10+((t-1)*9);
		long long s=((81*t)+1)+((n-k)*(n-k+2));
		cout<<s<<endl;
	}
	
	return 0;
} 

