#include <stdio.h>
#include <stdlib.h>
int GCD(int i,int j)
{
    int c;
    while(i!=0)
    {
        c=j%i;
        j=i;
        i=c;
    }
    return j;
}
int main()
{
    int n,G,i,j;
    while(scanf("%d",&n)==1 && n!=0)
    {
        G=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
