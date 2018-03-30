#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a,int b)
{
   if(b==0)
      return a;
   return gcd(b,a%b);
}
int main() {
 
   int a,b,t;
   cin>>t;
   while(t--)
   {
      cin>>a>>b;
      cout<<abs(a-b)/abs(gcd(a,b))<<"\n";
   }
   return 0;
} 
