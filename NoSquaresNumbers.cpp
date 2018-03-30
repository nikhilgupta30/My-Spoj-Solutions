#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
 
int main(){
 
	//cout<<"checkpoint -1\n";
 
	vector<ll> squares;
 
	//cout<<"checkpoint 0\n";
 
	ll temp=2;
	while(1){
		if(temp*temp > 100000){
			break;
		}
		squares.push_back(temp*temp);
		temp++;
	}
 
	//cout<<"checkpoint 1\n";
 
	int seive[100001]= {0};
 
	for(ll i=0;i<squares.size();i++){
		ll multiply = 1;
		while(squares[i]*multiply < 100001){
			seive[squares[i]*multiply] = 1;
			multiply++;
		}
	}
 
    // for(ll i=1;i<100001;i++){
    //     cout<<seive[i]<<endl;
    // }
	
	//cout<<"checkpoint 2\n";
 
	ll count[10][100001];
	for(int i=0;i<10;i++){
		count[i][0] = 0;
	}
 
	for(ll i=1;i<100001;i++){
		if(seive[i]==0){
			vector<int> digits(10,0);
			ll tmp = i;
			while(tmp>0){
				digits[tmp%10] = 1;
				tmp /= 10;
			}
 
			for(int j=0;j<10;j++){
				count[j][i]  = count[j][i-1] + digits[j];
			}
		}
		else{
			for(int j=0;j<10;j++){
				count[j][i]  = count[j][i-1] ;
			}
		}
	}
 
	//cout<<"checkpoint 3\n";
	// for(ll i=0;i<100001;i++){
	// 	for(int j=0;j<10;j++){
	// 		cout<<count[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
 
	ll t;
	cin>>t;
 
	while(t--){
		ll a,b;
		int d;
		cin>>a>>b>>d;
		cout<<count[d][b]-count[d][a-1]<<"\n";
	}
 
	return 0;
}
