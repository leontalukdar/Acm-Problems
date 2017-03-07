#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a,b,n;
    while(scanf("%lld %lld %lld",&a,&b,&n)==3)
    {
        if(a==0 && b==0 && n==0)
            break;
        n=n%5;
        if(n==0)
            printf("%lld\n",a);
        else if(n==1)
            printf("%lld\n",b);
        else if(n==2)
            printf("%lld\n",(b+1)/a);
        else if(n==3)
            printf("%lld\n",(a+b+1)/(a*b));
        else if(n==4)
            printf("%lld\n",(a+1)/b);
    }
    return 0;
}
