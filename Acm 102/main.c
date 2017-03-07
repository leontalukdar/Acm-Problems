#include <stdio.h>
int main()
{
    int a[6],g[3],b[3],c[3],d,i;
    while(scanf("%d %d %d %d %d %d %d %d %d",&g[0],&b[0],&c[0],&g[1],&b[1],&c[1],&g[2],&b[2],&c[2])==9)
    {
        a[0]=g[0]+c[0]+g[1]+b[1]+b[2]+c[2];
        a[1]=g[0]+c[0]+b[1]+c[1]+g[2]+b[2];
        a[2]=b[0]+c[0]+g[1]+c[1]+g[2]+b[2];
        a[3]=b[0]+c[0]+g[1]+b[1]+g[2]+c[2];
        a[4]=g[0]+b[0]+c[1]+g[1]+c[2]+b[2];
        a[5]=g[0]+b[0]+c[1]+b[1]+c[2]+g[2];
        d=a[0];
        for(i=0;i<6;i++)
        {
            if(d>a[i])
                d=a[i];
        }
        if(d==a[0])
            printf("BCG %d\n",d);
        else if(d==a[1])
            printf("BGC %d\n",d);
        else if(d==a[2])
            printf("GBC %d\n",d);
        else if(d==a[3])
            printf("GCB %d\n",d);
        else if(d==a[4])
            printf("CBG %d\n",d);
        else if(d==a[5])
            printf("CGB %d\n",d);
    }
    return 0;
}
