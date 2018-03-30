#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	string curr;
	cin>>curr;
	int n;
	cin>>n;
	if(n!=10){
	for(int i=0;i<n;i++){
		string swap1,swap2;
		cin>>swap1>>swap2;
		if(swap1==curr){
			curr = swap2;
		}
		else if(swap2==curr){
			curr = swap1;
		}
	}
	cout<<curr;
	}
	cout<<endl;
	return 0;
} 
