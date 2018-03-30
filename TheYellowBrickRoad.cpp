#include<bits/stdc++.h>
 
using namespace std;
 
int gcd(int a, int b){
    
	if (a == 0)
        return b;
	
    return gcd(b%a, a);
}
 
int main(){
	
	int n;
	
	while(1){
		cin>>n;
		if(n==0){
			break;
		}
		
		vector< vector<int> > stones(n);
		int a,b,c;
		
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			if(a>b){
				swap(a,b);
			}
			if(b>c){
				swap(b,c);
			}
			if(a>b){
				swap(a,b);
			}
			stones[i].push_back(a);
			stones[i].push_back(b);
			stones[i].push_back(c);
		}
		
		int hcfa = stones[0][0],hcfb = stones[0][1],hcfc = stones[0][2];
		
		for(int i=1;i<n;i++){
			hcfa = gcd(hcfa,stones[i][0]);
			hcfb = gcd(hcfb,stones[i][1]);
			hcfc = gcd(hcfc,stones[i][2]);
		}
		//cout<<hcfa<<" "<<hcfb<<" "<<hcfc<<endl;
		
		long long ans=0;
		for(int i=0;i<n;i++){
			ans += (stones[i][0]/hcfa)*(stones[i][1]/hcfb)*(stones[i][2]/hcfc);
		}
		
		int hcf = gcd(gcd(hcfa,hcfb),hcfc);
		ans *= (hcfa/hcf)*(hcfb/hcf)*(hcfc/hcf);
		
		cout<<ans<<endl;
		
	}
	
	return 0;
}
