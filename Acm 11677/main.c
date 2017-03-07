#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,t1,t2,hr1,hr2,t;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        hr1=h1*60;
        t1=hr1+m1;
        if(h2<h1 || (h2==h1 && m2<=m1))
        {
            hr2=(h2+24)*60;
            t2=hr2+m2;
        }
        else
        {
            hr2=h2*60;
            t2=hr2+m2;
        }
        t=t2-t1;
        printf("%d\n",t);
    }
    return 0;
}
