#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll CountPS(string str, ll n){
 
    ll dp[n][n];
    memset(dp, 0, sizeof(dp));
 
    bool P[n][n];
    memset(P, false , sizeof(P));
 
    for (ll i= 0; i< n; i++)
        P[i][i] = true;
 
    for (ll i=0; i<n-1; i++){
        if (str[i] == str[i+1]){
            P[i][i+1] = true;
            dp[i][i+1] = 1 ;
        }
    }
 
    for (ll gap=2 ; gap<n; gap++){
		for (ll i=0; i<n-gap; i++){
 
            ll j = gap + i;
 
            if (str[i] == str[j] && P[i+1][j-1] )
                P[i][j] = true;
 
            if (P[i][j] == true)
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1];
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
        }
    }
 
    return dp[0][n-1];
}
 
int main() {
	
	string str;
	cin>>str;
 
	cout<<CountPS(str,str.size())+str.size();
 
	return 0;
} 
