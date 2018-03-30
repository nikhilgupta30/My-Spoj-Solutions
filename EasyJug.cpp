#include<bits/stdc++.h>
 
using namespace std;
 
long gcd(long a,long b){
	 if (b==0)
       return a;
   
    return gcd(b, a%b);
}
 
int main(){
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		long m,n,d;
		cin>>m>>n>>d;
		
		if(m>n)
			swap(m,n);
		
		if(d>n)
			cout<<"NO";
		else if((d % gcd(n,m)) != 0)
			cout<<"NO";
		else{
			cout<<"YES";
		}
		
		cout<<endl;
		
	}
	
	return 0;
} 
