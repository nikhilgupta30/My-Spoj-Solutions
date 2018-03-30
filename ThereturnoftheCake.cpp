#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	for(int q=0;q<t;q++){
		long long x,y,z;
		cin>>x>>y>>z;
		long long temp = x*x + y*y + 2*y*z;
		long long d = sqrt(temp);
		if(d*d == temp){
			d += x;
			d *= z;
			long long div = y+ 2*z;
			if(d%div==0){
				cout<<d/div;
			}
			else{
				cout<<"Not this time.";
			}
		}
		else{
			cout<<"Not this time.";
		}
		cout<<endl;
	}
	
	return 0;
} 
