#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int n,i,j,k,dv,len;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%s",str);
        len=strlen(str);
        dv=len/n;
        for(i=1;i<=n;i++)
        {
            j=i*dv;
            for(k=j-1;k>=j-dv;k--)
                printf("%c",str[k]);
        }
        printf("\n");
    }
    return 0;
}
