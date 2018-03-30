#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int N=107;
const int INF=100000000;
int a[N][N];
 
int main() {
 
	int ansi,i,j,c,d,ans,n,m,t,k;
	int b;
	cin>>m>>n;
	while(n!=0 && m!=0){
 
		for(i=0;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				cin>>a[i][j];
				if(i==0)
					a[i][j]=a[i][j]*10;
			}
		ans=0;
		ansi=1;
		for(i=1;i<=n;i++)
		{
			b=INF;
			for(j=1;j<=m;j++)
				if(a[i][j]!=0)
				b=min(a[0][j]/a[i][j],b);
			if(b>ans && b!=INF)
			{
				ans=b;
				ansi=i;
			}
		}
		cout<<ansi<<" "<<ans<<endl;
		cin>>m>>n;
	
	}
 
	return 0;
} 
