#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
int res[1001]={0,1,0,0,0,0,0,5,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,3,0,0,0,0,3,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,5,0,0,0,0,0,0,0,0,3,0,0,3,0,0,0,2,0,0,0,0,4,0,0,4,0,0,3,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,4,0,4,0,3,5,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,5,0,0,0,3,0,0,0,0,0,5,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,5,3,0,0,0,0,0,5,0,0,5,0,5,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,0,0,5,0,0,6,0,0,0,4,0,0,5,0,0,0,0,5,5,0,0,0,0,6,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,4,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,3,0,0,0,0,5,5,0,0,0,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,3,0,0,0,0,6,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,5,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,4,0,3,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,6,0,4,0,0,4,0,0,3,0,0,4,0,3,5,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,5,5,0,0,0,0,6,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,6,0,1,};

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<=1000)
        {
            if(res[n])
                printf("%d\n",res[n]);
            else
                printf("-1\n");
            continue;
        }
        int sum = 0,r;
        while(n)
        {
            r= n%10;
            sum+=r*r;
            n/=10;
        }
        if(sum==1)
        {
            printf("1\n");
        }
        else{
            if(res[sum])
                printf("%d\n",res[sum]+1);
            else
                printf("-1\n");
        }
    }
    return 0;
} 
