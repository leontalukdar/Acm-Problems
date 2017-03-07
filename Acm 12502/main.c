#include <stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n",c*(2*a-b)/(a+b));
    }
    return 0;
}
