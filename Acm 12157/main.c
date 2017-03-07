#include <stdio.h>
int main()
{
    int t,n,mile,juice,i,j,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        mile=juice=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            b=a;
            c=a;
            while(b>=0)
            {
                b=b-30;
                mile=mile+10;
            }
            while(c>=0)
            {
                c=c-60;
                juice=juice+15;
            }
        }
        if(mile<juice)
            printf("Case %d: Mile %d\n",i,mile);
        else if(mile==juice)
            printf("Case %d: Mile Juice %d\n",i,mile);
        else
            printf("Case %d: Juice %d\n",i,juice);
    }
    return 0;
}
