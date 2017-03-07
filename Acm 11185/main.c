#include <stdio.h>
int main()
{
    long long n, ar[100000]={0},i,j,sum;
    while(scanf("%lld",&n)==1 && n>=0)
    {
        sum=0;
        for(i=0;n!=0;i++)
        {
            ar[i]=n%3;
            n=n/3;
        }
        for(j=i-1;j>=0;j--)
        {
            sum=sum*10+ar[j];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
