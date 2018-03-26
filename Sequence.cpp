#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int MAXN=1000010;
 
ll n,top,st[MAXN],tem;
ll ans;
 
int main()
{
 
    scanf("%lld",&n);
    top=ans=0;
    for(int i=1;i<=n;++i)
    {
        scanf("%lld",&tem);
        while(top)
        {
            if(tem>=st[top])
            {
                if(top==1)
                    ans+=tem;
                else
                {
                    if(tem>st[top-1])ans+=st[top-1];
                    else ans+=tem;
                }
                top--;
            }
            else break;
        }
        st[++top]=tem;
    }
    
	for(int i=1;i<top;++i)
    	ans+=st[i];
    
	printf("%lld",ans);
    return 0;
}
