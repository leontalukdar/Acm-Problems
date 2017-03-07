#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int x)
{
    int i;
    if(x==2 || x==3)
        return 1;
    else
    {
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int n,i,j,k,flag1,flag2,rs;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=2;i<=n/2;i++)
        {
            k=i;
            j=n-k;
            flag1=prime(i);
            flag2=prime(j);
            if(flag1==1 && flag2==1)
            {
                rs=1;
                break;
            }
            else
                rs=0;
        }
        if(rs==1)
            printf("%d = %d + %d\n",n,k,j);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
