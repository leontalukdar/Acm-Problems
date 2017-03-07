#include<stdio.h>
int main()
{
    int i,j,k,l,n,a,m,f,o;
    scanf("%d",&n);
    for(a=1;a<=n;printf("\n"))
    {
        scanf("%d %d",&m,&f);
        for(o=1;o<=f;printf("\n"))
        {
            for(i=1;i<=m;printf("\n"))
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                i++;
            }
            for(k=j-2;k>=1;printf("\n"))
            {
                for(l=k;l>=1;l--)
                {
                    printf("%d",k);
                }
                k--;
            }
            o++;
            if(o>f)
                break;
        }
        a++;
        if(a>n)
            break;
    }
    return 0;
}
