#include <stdio.h>
int main()
{
    int n,sum,tn;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=n;
        tn=n;
        while(n>=3)
        {
            sum=sum+n/3;
            n=(n/3)+(n%3);
        }
        if(n==2)
            sum++;
        printf("%d\n",sum-tn);
    }
    return 0;
}
