#include <stdio.h>
int main()
{
    int n,i,a[1450],j,temp,flag;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=200)
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(1422-a[n-1]<=100 && flag!=0)
            flag=1;
        else
            flag=0;
        if(flag==1)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
