#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long long a,b,c,d,t=1;
	
	while(cin>>a>>b>>c>>d){
		vector<long long> num(4);
		num[0]=a;
		num[1]=b;
		num[2]=c;
		num[3]=d;
		sort(num.begin(),num.end());
		cout<<"Case "<<t++<<": "<<num[2]+num[3]<<endl;
	}
	
	return 0;
} 
