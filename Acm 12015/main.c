#include <stdio.h>
int main()
{
    char a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],g[1000],h[1000],i[1000],j[1000];
    int x,mini,k[10],n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s %d",a,&k[0]);
        scanf("%s %d",b,&k[1]);
        scanf("%s %d",c,&k[2]);
        scanf("%s %d",d,&k[3]);
        scanf("%s %d",e,&k[4]);
        scanf("%s %d",f,&k[5]);
        scanf("%s %d",g,&k[6]);
        scanf("%s %d",h,&k[7]);
        scanf("%s %d",i,&k[8]);
        scanf("%s %d",j,&k[9]);
        mini=0;
        for(x=0;x<10;x++)
        {
            if(k[x]>mini)
                mini=k[x];
        }
        printf("Case #%d:\n",++count);
        if(mini==k[0])
            printf("%s\n",a);
        if(mini==k[1])
            printf("%s\n",b);
        if(mini==k[2])
            printf("%s\n",c);
        if(mini==k[3])
            printf("%s\n",d);
        if(mini==k[4])
            printf("%s\n",e);
        if(mini==k[5])
            printf("%s\n",f);
        if(mini==k[6])
            printf("%s",g);
        if(mini==k[7])
            printf("%s\n",h);
        if(mini==k[8])
            printf("%s\n",i);
        if(mini==k[9])
            printf("%s\n",j);
    }
    return 0;
}
