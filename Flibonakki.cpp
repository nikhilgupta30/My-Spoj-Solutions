#include<bits/stdc++.h>
#define CPY(d, s) memcpy(d, s, sizeof(s))

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

ll base[2][2] = {{1, 1},{1, 0}}, mat[2][2], unit[2][2] = {{1,0},{0,1}};

void mul(ll a[2][2], ll b[2][2]) {
	ll temp[2][2] = {0};
	int i, j, k;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			for(k = 0; k < 2; k++) {
				temp[i][j] += a[i][k] * b[k][j];
				temp[i][j] %= MOD;
			}
	CPY(a, temp);
}

void expo(ll n) {
	if(n==0) CPY(mat, unit);
	else if(n&1) {
		expo(n-1);
		mul(mat, base);
	}
	else {
		expo(n>>1);
		mul(mat, mat);
	}
}

int main() {

	int t;
	ll n, res;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld", &n);
		n <<= 1;
		expo(n);
		res = mat[0][0]*mat[0][1];
		printf("%lld\n", res % MOD); 
	}

	return 0;
}
