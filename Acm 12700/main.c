#include <stdio.h>
int main()
{
    int i,x,n,j,b,w,t,a;
    char ch[12];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=0;
        w=0;
        t=0;
        a=0;
        scanf("%d",&x);
        while(getchar()!='\n');
        for(j=0;j<=x;j++)
        {
            scanf("%c",&ch[j]);
        }
        for(j=0;j<x;j++)
        {
            if(ch[j]=='B')
                b=b+1;
            if(ch[j]=='W')
                w=w+1;
            if(ch[j]=='T')
                t=t+1;
            if(ch[j]=='A')
                a=a+1;
        }
        if(a==x)
            printf("Case %d: ABANDONED\n",i);
        if(b==(x-a)&&a!=x)
            printf("Case %d: BANGLAWASH\n",i);
        if(w==(x-a)&&a!=x)
            printf("Case %d: WHITEWASH\n",i);
        if(b>w&&x!=(b+a))
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        if(w>b&&x!=(w+a))
            printf("Case %d: WWW %d - %d\n",i,w,b);
        if(b==w&&a!=x)
            printf("Case %d: DRAW %d %d\n",i,b,t);
    }
    return 0;
}
