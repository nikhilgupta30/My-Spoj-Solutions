#include<bits/stdc++.h>
 
using namespace std;
 
// Driver program to test above functions
int main()
{
	long long n,m;
	scanf("%lld",&n);//cin>>n;
	vector<long long> num(n);
	vector<long long> numsq(n);
	
	vector<long long> prefix(n+1);
	prefix[0]=0;
	vector<long long> prefixsq(n+1);
	prefixsq[0]=0;
	
	for(long long i=0;i<n;i++){
		scanf("%lld",&num[i]);//cin>>num[i];
		numsq[i] = num[i]*num[i];
		prefix[i+1] = num[i] + prefix[i];
		prefixsq[i+1] = numsq[i] + prefixsq[i];
	}
	
	cin>>m;
	for(long i=0;i<m;i++){
		long long u,v;
		scanf("%lld%lld",&u,&v);//cin>>u>>v;
		long long ans1 = prefix[v+1]-prefix[u];
		long long ans2 = prefixsq[v+1]-prefixsq[u];
		long long ans = (ans1*ans1 + ans2)/2;
		printf("%lld\n",ans);//cout<<ans<<endl;
	}
 
    return 0;
} 
