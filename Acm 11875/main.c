#include <stdio.h>
int main()
{
    int t,n,age[15],i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&age[i]);
        n=n/2;
        printf("Case %d: %d\n",j,age[n]);
    }
    return 0;
}
