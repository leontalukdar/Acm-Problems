#include <stdio.h>
int main()
{
    int n,hh,mm,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d:%d",&hh,&mm);
        hh=11-hh+(mm==0);
        if(hh<=0)
            hh=hh+12;
        if(mm!=0)
            mm=60-mm;
        printf("%02d:%02d\n",hh,mm);
    }
    return 0;
}
