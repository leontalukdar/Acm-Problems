#include <stdio.h>
int main()
{
    int n,sn,min_sp,i,j,sp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&sn);
        min_sp=0;
        for(j=0;j<sn;j++)
        {
            scanf("%d",&sp);
            if(sp>min_sp)
                min_sp=sp;
        }
        printf("Case %d: %d\n",i,min_sp);
    }
    return 0;
}
