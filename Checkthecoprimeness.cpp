#include <bits/stdc++.h>
using namespace std;
#define LL long long
int GCD(LL a, LL b)
{
   if(b==0)
      return a;
   else 
      return GCD(b,a%b);
}
int main() {
   int t;
   scanf("%d",&t);
   LL n,i;
   while(t--)
   {
      scanf("%lld",&n);
      for(i=n/2 ; i>=0 ; --i)
      {
         if(GCD(n,i)==1)
         {
            printf("%lld\n",i);
            break;
         }
      }
   }
   return 0;
} 
