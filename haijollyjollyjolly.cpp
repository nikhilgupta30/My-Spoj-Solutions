
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	for(int q=0;q<t;q++){
		string s;
		cin>>s;
		//252 525
		int sum39=0;
		int div7=0;
		int help =1;
		for(int i=s.size()-1;i>=0;i--){
			sum39 += s[i]-'0';
			sum39 %= 9;
			switch(help){
				case 1: div7 += (s[i]-'0')*1;
						break;
				case 2: div7 += (s[i]-'0')*3;
						break;
				case 3: div7 += (s[i]-'0')*2;
						break;
				case 4: div7 += (s[i]-'0')*6;
						break;
				case 5: div7 += (s[i]-'0')*4;
						break;
				case 6: div7 += (s[i]-'0')*5;
						break;
			}
			help++;
			if(help==7)
				help=1;
			div7 %= 7;
		}
		
		if(div7==0){
			int div3 = sum39%3;
			int div9 = sum39%9;
			if(div9==0){
				int div4 = (10*(s[s.size()-2]-'0'))+(s[s.size()-1]-'0');
				div4 %= 4;
				if(div4==0){
					cout<<"Yes ";
				}
				else{
					cout<<"No ";
				}
			}
			else{
				cout<<"No ";
			}
			
			if(div3==0){
				int div25 = (10*(s[s.size()-2]-'0'))+(s[s.size()-1]-'0');
				div25 %= 25;
				if(div25==0){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
			}
			else{
				cout<<"No";
			}
		}
		else{
			cout<<"No No";
		}
		cout<<endl;
		
	}
	
	return 0;
}
