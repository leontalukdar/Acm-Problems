#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double r,n,area=0;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        area=n*.5*r*r*sin((2*pi)/n);
        printf("%.3lf\n",area);
    }
    return 0;
}
