#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long s,d,i;
    while(scanf("%llu %llu",&s,&d)==2)
    {
        for(i=s;s<d;)
        {
            i++;
            s=s+i;
        }
        printf("%llu\n",i);
    }
    return 0;
}
