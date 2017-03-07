#include <stdio.h>
#include <math.h>
int main()
{
    double n,dg;
    int i=0;
    while(scanf("%lf",&n)==1)
    {
        if(n==0)
            break;
        dg=ceil((3.00+sqrt(9.00+4.0*2.0*n))/2.00);
        printf("Case %d: %.0lf\n",++i,dg);
    }
    return 0;
}
