#include <stdio.h>
int main()
{
    int n,i,j,a,b,c,d,e;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=1;i<=n;i++)
        {
            j=0;
            scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            if(a<=127 && a>=0)
                ++j;
            if(b<=127 && b>=0)
                ++j;
            if(c<=127 && c>=0)
                ++j;
            if(d<=127 && d>=0)
                ++j;
            if(e<=127 && e>=0)
                ++j;
            if(a<=127 && a>=0 && j==1)
                printf("A\n");
            if(b<=127 && b>=0 && j==1)
                printf("B\n");
            if(c<=127 && c>=0 && j==1)
                printf("C\n");
            if(d<=127 && d>=0 && j==1)
                printf("D\n");
            if(e<=127 && e>=0 && j==1)
                printf("E\n");
            if(j!=1)
                printf("*\n");
        }
    }
    return 0;
}
