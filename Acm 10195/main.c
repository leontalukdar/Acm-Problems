#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,s,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a+b<=c||b+c<=a||c+a<=b)
        {
            printf("The radius of the round table is: 0.000\n");
            continue;
        }
        else
        {
            s=(a+b+c)/2.0;
            r=sqrt((s-a)*(s-b)*(s-c)/s);
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}

