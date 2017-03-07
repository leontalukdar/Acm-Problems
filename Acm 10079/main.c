#include <stdio.h>
int main()
{
    int c,i;
    long long int num;
    while(1)
    {
        num=1;
        scanf("%d",&c);
        if(c<0)
            break;
        for(i=1;i<=c;i++)
        {
            num=num+i;
        }
        printf("%lld\n",num);
    }
    return 0;
}
