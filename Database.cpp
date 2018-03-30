#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{	
    int t;
    scanf("%d",&t);
    for(int q=1;q<=t;q++){
		int n,r;
		cin>>n>>r;
		
		vector< pair<int,int> > data;
		int stud,sub;
		for(int i=0;i<r;i++){
			cin>>stud>>sub;
			data.push_back(make_pair(stud,sub));
		}
		
		vector< set<int> > check(n);
		int impossible = 0;
		for(int i=0;i<r;i++){
			if(check[data[i].first-1].find(data[i].second)==check[data[i].first-1].end()){
				check[data[i].first-1].insert(data[i].second);
			}
			else{
				impossible = 1;
				break;
			}
		}
		cout<<"Scenario #"<<q<<": ";
		if(impossible){
			cout<<"impossible";
		}
		else{
			cout<<"possible";
		}
		cout<<endl;
    }
    return 0;
} 
