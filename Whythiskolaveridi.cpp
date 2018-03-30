#include <bits/stdc++.h>
 
using namespace std;
 
int ans(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (ans(n-1, k+1) + k-1) % n + 1;
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int k = 1;
		printf("%d\n", ans(n, k));
	}
	
	return 0;
	
} 
