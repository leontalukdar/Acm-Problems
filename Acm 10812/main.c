#include <stdio.h>
int main()
{
    int a,b,n,sum,dif,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&sum,&dif);
        if(sum>=dif && (sum+dif)%2==0)
        {
            a=(sum+dif)/2;
            b=(sum-dif)/2;
            printf("%d %d\n",a,b);
        }
        else
            printf("impossible\n");
    }
    return 0;
}
