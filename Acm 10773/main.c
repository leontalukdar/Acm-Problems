#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    double d,u,v,t,t1,t2,angle,r1,r2,s1,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(u==0 || v==0 || u<=v)
        {
            printf("Case %d: can't determine\n",i);
            continue;
        }
        r1=sqrt(u*u+v*v);
        x=v/u;
        angle=atan(x);
        s1=d/cos(angle);
        t1=s1/r1;
        r2=sqrt(u*u-v*v);
        t2=d/r2;
        if(t1>t2)
            t=t1-t2;
        if(t1<t2)
            t=t2-t1;
        if(t<0.001)
            printf("Case %d: can't determine\n",i);
        else
            printf("Case %d: %.3lf\n",i,t);
    }
    return 0;
}
