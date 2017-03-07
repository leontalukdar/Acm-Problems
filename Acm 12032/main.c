#include <stdio.h>
int main()
{
    int t,arr[100000],i,n,j,max,res,dif;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        max=0;
        for(j=1;j<=n;j++)
            scanf("%d",&arr[j]);
        for(j=1;j<=n;j++)
        {
            dif=arr[j]-arr[j-1];
            if(max<dif)
                max=dif;
        }
        res=max;
        for(j=1;j<=n;j++)
        {
            dif=arr[j]-arr[j-1];
            if(max==dif)
                max--;
            else if(dif>max)
            {
                res++;
                break;
            }
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
