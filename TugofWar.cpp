#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N,i,j;
        bool check;
        bool b[2][9802]={};
        scanf("%lld",&N);
        long long a[N];
		long long sum=0;
		for(i=0;i<N;i++){
			scanf("%lld",&a[i]);
			sum += a[i];
		}
		if(N>=100) printf("YES\n");
        else
        {	
            check=false;
            b[0][0]=b[0][a[0]]=true;
            
            for(i=1;i<N;i++){
                
				for(j=0;j<a[i];j++) b[1][j]=b[0][j];
                
				for(;j<sum/2+1;j++)
                {
                    if(b[0][j-a[i]]==true and b[0][j]==true)
                    {
                        check=true;
                        printf("YES\n");
                        break;
                    }
                    b[1][j]=b[0][j-a[i]] or b[0][j];
                }
                if(check==true) break;
                for(j=0;j<=9801;j++) b[0][j]=b[1][j];
            }
            if(check==false) printf("NO\n");
        }
    }
    return 0;
} 
