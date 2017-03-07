#include <stdio.h>
int main()
{
    int n,i,max,b[100000];
    while(scanf("%d",&n)==1)
    {
        int a[100000]={0};
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        a[0]=b[0];
        for(i=1;i<n;i++)
        {
            if(a[i-1]+b[i]>b[i])
                a[i]=b[i]+a[i-1];
            else
                a[i]=b[i];
        }
        max=0;
        for(i=0;i<n;i++)
        {
            if(max<a[i])
                max=a[i];
        }
        if(max==0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",max);
    }
    return 0;
}
