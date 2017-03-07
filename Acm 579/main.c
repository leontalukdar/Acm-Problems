#include <stdio.h>
int main()
{
    double h,m,min,hr,dif;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        if(h>=1 && h<=11)
        {
            hr=h*30.00+m*.5;
            min=m*6.00;
        }
        if(h==12)
        {
            hr=m*.5;
            min=m*6.00;
        }
        if(hr>min)
            dif=hr-min;
        else
            dif=min-hr;
        if(dif<=180)
            printf("%.3lf\n",dif);
        else
            printf("%.3lf\n",360-dif);
    }
    return 0;
}
