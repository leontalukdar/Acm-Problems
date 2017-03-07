#include <stdio.h>
int main()
{
    int T,N,hj,lj,i,j,ar[55];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        hj=lj=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j=0;j<N-1;j++)
        {
            if(ar[j]>ar[j+1])
                lj++;
            if(ar[j]<ar[j+1])
                hj++;
        }
        printf("Case %d: %d %d\n",i,hj,lj);
    }
    return 0;
}
