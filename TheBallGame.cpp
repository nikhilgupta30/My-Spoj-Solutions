#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	for(int q=1;q<=t;q++){
		double n;
		cin>>n;
		cout << std::fixed;
        cout << std::setprecision(8);
        cout << n/(n+1);
        cout<<endl;
	}
	
	return 0;
} 
