#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    int n;
    double r,angle, a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf",&a,&b);
        r=sqrt(a*a+b*b);
        angle=atan2(a,b);
        if(angle<0)
            angle=2*pi+angle;
        printf("%.2lf %.2lf\n",angle,r);
    }
    return 0;
}
