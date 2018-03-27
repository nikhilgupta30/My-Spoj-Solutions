#include<iostream>
 
using namespace std;
 
int gcd(int n1,int n2){
	if(n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}
 
int main(){
	
	int t;
	cin>>t;
	
	for(int q=0;q<t;q++){
		string s;
		cin>>s;
		int done=0;
		int index=-1;
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='.'){
				done=1;
				index = i;
				break;
			}
		}
		int num=0;
		int mul=1;
		if(done==1){
			for(int i=s.size()-1;i>index;i--){
				num += (s[i]-'0')*mul;
				mul *=10;
			}
			
			cout<<mul/gcd(mul,num);
			
		}
		else{
			cout<<1;
		}
		cout<<endl;
	}
	
	return 0;
}
