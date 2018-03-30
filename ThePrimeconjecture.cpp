#include<bits/stdc++.h>
 
using namespace std;
 
long long primeFactors(long long n)
{	long long ans=1;
    while (n%2 == 0)
    {	ans = 2;
        //printf("%d ", 2);
        n = n/2;
    }
	
    for (long long i = 3; i <= sqrt(n); i = i+2)
    {	
        while (n%i == 0)
        {	ans = i;
            //printf("%d ", i);
            n = n/i;
        }
    }
 
    if (n > 2)
        return n;
	else
		return ans;
}
 
// Driver program to test above functions
int main(){
 
	int t;
	scanf("%d",&t);//cin>>t;
	
	for(int q=1;q<=t;q++){
		int n;
		scanf("%d",&n);//cin>>n;
		long long ans;
		long long m=1;
		vector<long long> num(n);
		for(int i=0;i<n;i++){
			scanf("%lld",&num[i]);//cin>>num[i];
			m *= num[i];
		}
		m += 1;
		ans = primeFactors(m);
		
		printf("Case #%d: %lld\n",q,ans);//cout<<"Case #"<<q<<": ";
		//cout<<ans<<endl;
	}
	
    return 0;
} 
