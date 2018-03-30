#include<iostream>
 
using namespace std;
 
int main(){
	
	long long int t;
	cin>>t;
	
	for(long long int i=0;i<t;i++){
		long long int n;
		cin>>n;
		long long int mod = n;
		if(n&1){
			n = n-2;
		}
		else{
			n = n-3;
		}
		n= (n+1)/2;
		cout<<(n*n)%mod<<endl;
	}
	
	return 0;
} 
