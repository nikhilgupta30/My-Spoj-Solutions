#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll primeFactors(int n){
 
	ll ans=INT_MIN;
	ll temp=0;
    while (n%2 == 0){
        temp++;//printf("%d ", 2);
        n = n/2;
    }
 
	if(temp>ans){
		ans=temp;
	}
 
    for (int i = 3; i <= sqrt(n); i = i+2){
        temp=0;
		while (n%i == 0)
        {
            temp++;//printf("%d ", i);
            n = n/i;
        }
		if(temp>ans){
			ans=temp;
		}
    }
 
    if (n > 2){
        temp=1;//printf ("%d ", n);
		if(temp>ans){
			ans=temp;
		}
	}
 
	return ans;
}
 
int main(){
 
	ll t;
	cin>>t;
 
	while(t--){
		ll n;
		cin>>n;
		cout<<primeFactors(n)<<endl;
	}
 
	return 0;
} 
