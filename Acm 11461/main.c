#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,i,j,sq;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        j=0;
        for(i=1;i<=sqrt(b);i++)
        {
            sq=pow(i,2);
            if(sq>=a && sq<=b)
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
