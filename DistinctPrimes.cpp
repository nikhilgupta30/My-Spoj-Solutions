#include<bits/stdc++.h>
using namespace std;
 
const int MAX = 3000;
vector<int> result;
 
void smartNumber(int n){
    int primes[MAX] = {0};
 
    for (int i=2; i<MAX; i++){
        if (primes[i] == 0)
        {
            primes[i] = 1;
 
            for (int j=i*2; j<MAX; j=j+i)
            {
                primes[j] -= 1;
 
                if ( (primes[j] + 3) == 0)
                    result.push_back(j);
            }
        }
    }
 
    sort(result.begin(), result.end());
 
    //return result[n-1];
}
 
int main()
{
    int n = 1000;
	smartNumber(n);
    //cout << smartNumber(n);
	
	int t;
	cin>>t;
	
	while(t--){
		cin>>n;
		cout<<result[n-1]<<endl;
	}
	
    return 0;
}
