#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,h3,m3,h4,m4,n,i,hr1,hr2,hr3,hr4;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d:%d %d:%d %d:%d %d:%d",&h1,&m1,&h2,&m2,&h3,&m3,&h4,&m4);
        hr1=h1*60+m1;
        hr2=h2*60+m2;
        hr3=h3*60+m3;
        hr4=h4*60+m4;
        if(h1<hr1&&hr4<hr1)
        {
            if(hr3<hr2)
                printf("Case %d: Hits Meeting\n",i);
            else
                printf("Case %d: Mrs Meeting\n",i);
        }
        else if(hr3>hr1&&hr4>hr1)
        {
            if(hr3>hr2)
                printf("Case %d: Hits Meeting\n",i);
            else
                printf("Case %d: Mrs Meeting\n",i);
        }
        else
            printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
