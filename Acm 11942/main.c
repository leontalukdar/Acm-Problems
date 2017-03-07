#include <stdio.h>
int main()
{
    int ar[15],i,k,n,flag=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        for(i=0;i<10;i++)
            scanf("%d",&ar[i]);
        if(ar[0]>ar[1])
        {
            flag=0;
            for(i=0;i<9;i++)
            {
                if(ar[i]>ar[i+1])
                    flag++;
            }
        }
        if(ar[1]>ar[0])
        {
            flag=0;
            for(i=0;i<9;i++)
            {
                if(ar[i]<ar[i+1])
                    flag++;
            }
        }
        if(k==0)
            printf("Lumberjacks:\n");
        if(flag==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
