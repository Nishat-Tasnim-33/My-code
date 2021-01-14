#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i;
    long long v=1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        v*=n;
    }
    printf("%lld\n",v);
    return 0;
}
