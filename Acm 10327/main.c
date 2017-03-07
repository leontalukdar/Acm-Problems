#include <stdio.h>
int main()
{
    int n,i,j,arr[1001];
    while(scanf("%d",&n)!=EOF)
    {
        int count=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                if(arr[i]>arr[j])
                    count++;
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
