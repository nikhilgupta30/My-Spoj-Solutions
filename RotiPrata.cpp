#include <bits/stdc++.h>
using namespace std;
int n;
 
long long get_num(int a,long long sum)
{
    long long d = (long long)sqrt(a*a + 8*a*sum);
    d-=a;
    return d / (2*a);
}
 
int check(int arr[],long long chef,long long tim)
{
    long long count = 0;
    for(long long i =0 ;i<chef;i++)
    {
        count += get_num(arr[i],tim);
        if(count >= n)
            return 1;
    }
    return 0;
}
 
long long binary_search(int arr[],long long chef,long long max)
{
    long long low = 1,mid,high = max;
    while(low<high)
    {
        mid = (low+high)>>1;
        if(check(arr,chef,mid))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}
 
int main()
{
    int t;
	cin>>t;
    while(t--)
    {
        int chef;
        cin>>n>>chef;  //scanf("%d%d",&n,&chef);
        int arr[chef+9],ma = -1;
        for(int i = 0;i<chef ; i++){
            cin>>arr[i];  //scanf("%d",&arr[i]);
        }
        sort(arr,arr+chef);
        long long res = binary_search(arr,chef,(long long)10*n*(n+1)/2);
        printf("%lld\n",res);
    }
    return 0;
} 
