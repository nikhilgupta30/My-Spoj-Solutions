#include<iostream>
 
using namespace std;
 
int main(){
	
	long long int t;
	cin>>t;
	
	for(long long int i=0;i<t;i++){
		long long int w,b;
		cin>>w>>b;
		if(b%2==1){
			cout<<"1.000000";
		}
		else{
			cout<<"0.000000";
		}
		cout<<endl;
	}
	
	return 0;
} 
