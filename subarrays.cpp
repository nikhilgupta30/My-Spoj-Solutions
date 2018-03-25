#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	long n,k;
	cin>>n;
	
	vector<long> num(n);
	
	for(long i=0;i<n;i++){
		cin>>num[i];
	}
	
	cin>>k;
	
	multiset<long> temp;
	for(long i=0;i<k;i++){
		temp.insert(num[i]);
	}
	
	multiset<long>::reverse_iterator rev;
	multiset<long>::iterator it;
	rev = temp.rbegin();
	
	cout<<*rev;	
	
	for(long i=k;i<n;i++){
		it = temp.lower_bound(num[i-k]);
		temp.erase(it);
		temp.insert(num[i]);
		rev = temp.rbegin();
		cout<<" "<<*rev;
	}
	
	
	return 0;
}
