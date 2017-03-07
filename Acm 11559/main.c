#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,h,w,ans,p;
    int room;
    int cost=100000000;
    int i,j;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4)
    {
        for(i=0;i<h;i++)
        {
            scanf("%d",&p);
            for(j=0;j<w;j++)
            {
                scanf("%d",&room);
                ans = 0;
                if(room>=n)
                {
                    ans = n*p;
                    if(cost>ans)
                        cost = ans;
                }
            }

        }
        if(cost<=b)
            printf("%d\n",cost);
        else
            printf("stay home\n");
        cost = 100000000;
    }
    return 0;
}
