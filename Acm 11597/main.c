#include <stdio.h>
int main()
{
    int n,i=0;
    while(scanf("%d",&n)==1 && n!=0)
    {
        printf("Case %d: %d\n",++i,n/2);
    }
    return 0;
}
