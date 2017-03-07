#include <stdio.h>
int main()
{
    int i,j=0,n,a,b,x,eb;
    while(scanf("%d",&n)==1 && n!=0)
    {
        a=b=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if(x>=1 && x<=99)
                a++;
            if(x==0)
                b++;
        }
        eb=a-b;
        printf("Case %d: %d\n",++j,eb);
    }
    return 0;
}
