#include <stdio.h>
int main()
{
    int T,C,d,i;
    float nc,nf;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        nc=0.00;
        scanf("%d %d",&C, &d);
        nf=(float)((9.00*C)/5.00)+32;
        nf=nf+d;
        nc=(5.00*(nf-32))/9.00;
        printf("Case %d: %.2f\n",i,nc);
    }
    return 0;
}
