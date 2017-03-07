#include <stdio.h>
#include <math.h>
#define Pi 2*acos(0.0)
int main()
{
    int t,i;
    double areac,arear,l,r,w;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&l);
        r=l/5.00;
        w=r*3.00;
        areac=Pi*r*r;
        arear=l*w-areac;
        printf("%0.2lf %0.2lf\n",areac,arear);
    }
    return 0;
}
