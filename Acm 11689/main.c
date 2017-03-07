#include <stdio.h>
int main()
{
    int a,b,c,d,n,i,rem,sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=0,sum=0,d=1,a=a+b;d>=1;i++)
        {
            d=a/c;
            rem=a%c;
            a=d+rem;
            sum+=d;
        }
        printf("%d\n",sum);
    }
    return 0;
}
