#include <stdio.h>
int main()
{
    int T,N,K,P,i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&N,&K,&P);
        for(j=1;j<=P;j++)
        {
            if(K==N)
                K=0;
            K++;
        }
        printf("Case %d: %d\n",i,K);
    }
    return 0;
}
