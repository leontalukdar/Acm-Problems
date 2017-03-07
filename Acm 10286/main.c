#include <stdio.h>
#include <math.h>
int main()
{
    double n,b;
    while(scanf("%lf",&n)!=EOF)
    {
        b=1.0673956817111818692592637626711*n;
        printf("%.10lf\n",b);
    }
    return 0;
}
