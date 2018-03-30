#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{	
    int t;
    scanf("%d",&t);
    for(int q=1;q<=t;q++){
		long long n;
		cin>>n;
		vector<long long> num(n);
		for(long long i=0;i<n;i++){
			cin>>num[i];
		}
		
		long long min=0;
		long long curr=0;
		for(int i=n-1;i>=0;i--){
			curr -= num[i];
			if(curr<min){
				min = curr;
			}
		}
		cout<<"Scenario #"<<q<<": "<<curr-min+1<<endl;
    }
    return 0;
} 
