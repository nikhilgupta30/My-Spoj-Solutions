#include<bits/stdc++.h>
 
using namespace std;
 
bool compare(int i1,int i2){
	return i1 > i2;
}
 
// Driver program to test above functions
int main(){
 
	while(1){
		int n;
		cin>>n;
		if(n==0){
			break;
		}
		int temp,prev;
		//cin>>temp;
		int ip=0;
		
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),compare);
		if(1422-a[0]>100){
			ip=1;
			cout<<"IMPOSSIBLE\n";
		}
		else{
			prev = a[0];
			for(int i=1;i<n;i++){
				//cin>>temp;
				if(prev-a[i]>200){
					ip=1;
					break;
				}
				prev = a[i];
			}
			if(ip){
				cout<<"IMPOSSIBLE\n";
			}
			else{
				cout<<"POSSIBLE\n";
			}
		}
	}
	
    return 0;
} 
