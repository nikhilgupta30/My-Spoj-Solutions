#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{	
    int t;
    scanf("%d",&t);
    for(int q=1;q<=t;q++){
		int n,r;
		cin>>n>>r;
		
		unordered_set<int> set1;
		unordered_set<int> set2;
		
		for(int i=0;i<r;i++){
			int u,v;
			cin>>u>>v;
			set1.insert(u);
			set2.insert(v);
		}
		
		int spy=0;
		unordered_set<int>::iterator it;
		for(it=set1.begin();it!=set1.end();it++){
			if(set2.find(*it)!=set2.end()){
				spy = 1;
				break;
			}
		}
		cout<<"Scenario #"<<q<<": ";
		if(spy==1)
			cout<<"spied";
		else
			cout<<"spying";
		
		cout<<endl;
    }
    return 0;
} 
