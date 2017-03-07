#include <stdio.h>
int main()
{
    long long int n,num;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        num=1;
        while(num<n)
        {
            num*=2;
            num++;
        }
        if(num==n)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
