#include <stdio.h>
int main()
{
    char a[150][150];
    int i,j,r,c,n=0,flag=0;
    while(1)
    {
        scanf("%d %d",&r,&c);
        if(r==0 && c==0)
            break;
        for(i=0;i<r;i++)
        {
            while(getchar()!='\n');
            for(j=0;j<c;j++)
            {
                scanf("%c",&a[i][j]);
            }
        }
        long b[150][150]= {0};
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='*')
                {
                    b[i][j+1]++;
                    b[i-1][j+1]++;
                    b[i-1][j]++;
                    b[i-1][j-1]++;
                    b[i][j-1]++;
                    b[i+1][j-1]++;
                    b[i+1][j]++;
                    b[i+1][j+1]++;
                }
            }
        }

        if(flag==1)
            printf("\n");
        flag=1;
        printf("Field #%d:\n",++n);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='*')
                    printf("%c",a[i][j]);
                else
                    printf("%ld",b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
